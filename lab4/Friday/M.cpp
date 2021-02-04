#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];

	for(int i = 0; i<n;i++)
	{
		for(int j = 0;j<n;j++)
		{
			a[i][j] = 0;
		}
	}
	int dx[4],dy[4];
	dx[0] = 1, dy[0] = 0;
	dx[1] = 0, dy[1] = 1;
	dx[2] =-1, dy[2] = 0;
	dx[3] = 0, dy[3] =-1;
	int dir = 0, cnt = 1, x = 0, y = 0;
	while(cnt<= n*n)
	{

		while(cnt<= n*n && x >= 0 && x < n && y >=0 && y < n && a[y][x] == 0)
		{
			a[y][x] = cnt++;
			// cout<<"y = "<<x<<" x = "<<y<<endl;

			x += dx[dir];
			y += dy[dir];
		}
		
		x -= dx[dir];
		y -= dy[dir];
		dir++;
		dir = dir % 4;
		x += dx[dir];
		y += dy[dir];

	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout.width(3);
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;

}
// 1  2  3  4 * 
// 12 13 14 5
// 11 16 15 6
// 10 9  8  7
// 	  *
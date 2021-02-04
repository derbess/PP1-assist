#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[m][n];

	for(int i = n-1; i>=0;i--)
	{
		for(int j = 0;j<m;j++)
		{
			cin>>a[j][i];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
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
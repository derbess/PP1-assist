#include<iostream>
using namespace std;
int main()
{
	int r, c;
	cin>>r>>c;
	int arr[r][c];

	for(int i = 0; i<r;i++)
	{
		for(int j = 0;j<c;j++)
		{
			arr[i][j] = 0;
		}
	}

	int cnt = 0;
	for(int i=0;i<r;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<c;j++)
			{
				arr[i][j] = cnt;
				cnt++;
			}	
		}
		else {
			for(int j=c-1;j>=0;j--)
			{
				arr[i][j] = cnt;
				cnt++;
			}
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout.width(3);
			cout<<arr[i][j];
		}
		cout<<endl;
	}

}
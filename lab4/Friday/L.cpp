#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i =1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"coordinates of min elements:"<<endl;
	int sum = 0;
	for(int j=1;j<=m;j++)
	{
		int mn = 1e8;
		int indexI = 0, indexJ = 0;
		for(int i = 1; i<=n;i++)
		{
			if(a[i][j] < mn) 
			{
				mn = a[i][j];
				indexI = i;
				indexJ = j;
			}
		}
		sum += mn;
		cout<<indexI<<";"<<indexJ<<endl;
	}
	cout<<"Their sum:"<<endl;
	cout<<sum;

	
	return 0;

}

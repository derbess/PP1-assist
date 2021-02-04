#include<iostream>
using namespace std;

int a[111][111];

int main()
{
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	int n;
	long long sum = 0, sum2 = 0;;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			sum2+=a[i][j];
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i == 0 || j == 0 || i == n-1 || j == n-1 || i == j || i + j == n - 1)
			{
				sum2 -= a[i][j];
				cout.width(3);
				cout<<"*";
			}
			else 
			{
				// sum += a[i][j];
				cout.width(3);
				cout<<a[i][j];
			}
		}
		cout<<endl;
	}
	cout<<sum2;
	return 0;
}


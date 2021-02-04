#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	a[n] = 0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int t;
	cin>>t;
	for(int i=0;i<n;i++)
	{
		if(a[i]==t)
		{
			for(int j = i;j<n;j++)
			{
				a[j] = a[j+1];
			}
			i--;
		}
	}
	for(int i = 0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

// 1 2 2 4 5 0
// 2
// 1 2 4 5   
//   | 
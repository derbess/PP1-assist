#include<iostream>
using namespace std;
int a[1001];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a[t]++;
	}
	int mx = -1;
	for(int i=1;i<=1000;i++)
	{
		if(mx < a[i]) mx = a[i];
	}	
	for(int i = 1000;i>0;i--)
	{
		if(a[i] == mx) cout<<i<<" ";
	}
	return 0;
}


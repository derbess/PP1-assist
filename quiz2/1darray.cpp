#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n/2;i++)
	{
		if(i*2+1<n) cout<< a[i*2] + a[i*2+1]<<" ";
	}
	if(n%2!=0) cout<<a[n-1];
	
	
	return 0;
}


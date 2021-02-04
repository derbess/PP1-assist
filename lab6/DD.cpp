#include<iostream>
#include<cmath>
using namespace std;

bool check(int a[], int n, int x)
{
	for(int i=0;i<n;i++)
	{
		if(a[i] == x) return true;
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	int x;
	cin>>x;
	bool swt = check(a,n,x);
	if(swt) cout<<"Yes";
	else cout<<"No";

	return 0;	
}


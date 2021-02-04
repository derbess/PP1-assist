#include<iostream>
using namespace std;

bool binsearch(int a[], int l, int r, int x)
{
	if(r>=l)
	{
		int mid = l+(r-l)/2;
		if(a[mid] == x) return true;
		else if(a[mid] > x) return binsearch(a,l,mid-1,x);
		else if(a[mid] < x) return binsearch(a,mid+1,r,x);
	}
	return false;
}
// 9

// 0 1 2 3 4 5 6  7

// 1 3 4 5 7 9 11 13

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
	bool swt = false;
	swt = binsearch(a,0,n-1,x);
	if(swt) cout<<"Yes";
	else cout<<"No";
	return 0;
}

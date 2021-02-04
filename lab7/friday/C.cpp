#include<iostream>
using namespace std;

bool bisearch(int a[], int l, int r, int x)
{
	if(l>r) return false;
	else { 
		int mid = l + (r-l)/2;
		if(a[mid] == x) return true;
		else if(a[mid]>x) return bisearch(a,l,mid-1,x);
		else if(a[mid]<x) return bisearch(a,mid+1,r,x);
	}

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
	if(bisearch(a,0,n-1,x) == true) cout<<"Yes";
	else cout<<"No";
	return 0;
}
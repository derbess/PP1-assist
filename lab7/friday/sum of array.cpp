// sum of array
#include<iostream>
using namespace std;

int sum2(int a[], int n, int index)
{
	if(index==n) return 0;
	else return sum2(a,n,index+1) + a[index];
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
	cout<<sum2(a,n,0);
}
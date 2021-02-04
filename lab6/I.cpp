#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int maxi(int a, int b, int c, int d)
{
	return max(max(a,b),max(c,d));
}

int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	cout<<maxi(n,m,a,b);
	return 0;	
}
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double hyp(int n, int x)
{
	return sqrt(n*n + x*x);
}

int main()
{
	int n,m;
	cin>>n>>m;
	double d = hyp(n,m);

	cout<<setprecision(4)<<d;
	return 0;	
}


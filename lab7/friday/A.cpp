// sum of array
#include<iostream>
using namespace std;

int degreeof2(int n)
{
	if(n==0) return 1;
	else return degreeof2(n-1)*2;
}

int main()
{
	int n;
	cin>>n;
	cout<<degreeof2(n);
	return 0;
}
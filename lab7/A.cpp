#include<iostream>
using namespace std;

int power(int n)
{
	if(n==0) return 1;
	else
	{
		return power(n-1)*2;
	}
}


int main()
{
	int n;
	cin>>n;
	cout<<power(n);
	return 0;
}

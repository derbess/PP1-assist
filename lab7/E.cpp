#include<iostream>
using namespace std;

string binary(long long x)
{
	if(x == 1) return "Yes";
	else if (x%2!=0) return "No";
	else return binary(x/2);
}


int main()
{
	long long n;
	cin>>n;
	cout<<binary(n);
	return 0;
}

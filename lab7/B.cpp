#include<iostream>
using namespace std;

string binary(int n, string s)
{
	if(n==0) return s;
	else return binary(n/2, char(n%2 + 48) + s);	
}


int main()
{
	int n;
	string s = "";
	cin>>n;
	cout<<binary(n,s);
	return 0;
}

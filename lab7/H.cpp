#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==1) return 0;
	else if(n==2) return 1;
	else return fib(n-1)+fib(n-2);
}


int main()
{
	int s;
	cin>>s;
	cout<<fib(s);
	return 0;
}
// 1 0
// 2 1
// 3 1
// 4 2
// 5 3
// 6 5
// 7 8

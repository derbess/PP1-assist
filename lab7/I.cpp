#include<iostream>
using namespace std;

int inf(int n)
{
	int x;
	cin>>x;
	if(x==0) return n;
	else return inf(x)+n;
}


int main()
{
	cout<<inf(0);
	return 0;
}


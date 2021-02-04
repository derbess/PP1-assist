#include<iostream>
#include<cmath>
using namespace std;
int n, a[1111], b[1111];

void inputN()
{
	cin>>n;
}
void fillA()
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void fillB()
{
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
}

void difference(int a[],int b[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<abs(a[i]-b[i])<<" ";
	}
}

// int difference1(int a,int b)
// {
// 	return abs(a-b);
// }

int f1(int n, int m)
{
	return n+m;
}



int main()
{
	inputN();
	fillA();
	fillB();
	difference(a,b,n);
	return 0;	
}

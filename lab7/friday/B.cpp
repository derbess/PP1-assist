// sum of array
#include<iostream>
using namespace std;

string tobinary(int n)
{
	if(n==1) return "1";
	else if(n%2==0) return tobinary(n/2) + "0";
	else if(n%2==1) return tobinary(n/2) + "1";
}

int main()
{
	int n;
	cin>>n;
	cout<<tobinary(n);
	return 0;
}
 	
 		





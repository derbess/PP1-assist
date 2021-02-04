#include<iostream>
using namespace std;

int F(int x)
{
	if(x == 1) return 1;
	int mx = 0;
	int cnt = 0;
	for(int i=x-1;i>=1;i--)
	{
		if(x%i==0) 
		{
			if(i>mx) mx = i;
			cnt++;
		}
	}
	// cout<<x<<" "<<mx<<" "<<cnt<<endl;
	return cnt+F(mx);
}
 
int main()
{
	int n;
	cin>>n;
	cout<<F(n);
	return 0;
}
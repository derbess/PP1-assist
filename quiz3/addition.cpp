#include<iostream>
#include<set>
using namespace std;

int main()
{
	int n;
	set<int> s;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		s.insert(a[i]+a[i+1]);
	}
	cout<<s.size();
	return 0;
}
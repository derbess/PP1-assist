#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		s.insert(t);
	}
	int k;
	cin>>k;
	int cnt = 0;
	int i = 0;
	multiset<int>::iterator it;
	for(it=s.begin(); it!=s.end(); it++)
	{
		cout<<*it<<" ";
		i++;
		if(i==k) break;
	}
	return 0;
}
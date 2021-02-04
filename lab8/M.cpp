#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		s.insert(t);
	}
	int cnt = 0;
	set<int>::iterator it;
	for(it=s.begin(); it!=s.end(); it++)
	{
		int cnt;
		
		cnt+=*it;
	}
	cout<<cnt;
	return 0;
}
// 1 0
// 2 1
// 3 1
// 4 2
// 5 3
// 6 5
// 7 8

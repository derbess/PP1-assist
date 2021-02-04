#include<iostream>
#include<map>

#include<set>
using namespace std;

int main()
{
	int n;
	cin>>n;
	map<int, int> m;
	set<int> s;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		s.insert(x);
		m[x]++;
	}
	set<int >::iterator it;
	int cnt = 0;
	for(it = s.begin();it!=s.end();it++)
	{
		if(m[(*it)]>=2) cnt++;
	}
	cout<<cnt;
	return 0;
}

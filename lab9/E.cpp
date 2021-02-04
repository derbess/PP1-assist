#include<iostream>
#include<map>

#include<set>
using namespace std;

int main()
{
	int n,target;
	cin>>n;
	map<string, int> m;
	set<string> s;
	for(int i=0;i<n;i++)
	{
		string x;
		cin>>x;
		s.insert(x);
		m[x]++;
	}
	set<string>::iterator it;
	int cnt = 0;
	for(it = s.begin(); it != s.end();it++)
	{
		if(m[(*it)] == 3) cnt++;
	}
	cout<<cnt;
	return 0;
}

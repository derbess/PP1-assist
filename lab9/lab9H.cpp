#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
	map<string, int> mp;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		if(mp[s] == 0)
		{
			mp[s] = i;
		}
	}
	map<string, int>::iterator it;
	for(it = mp.begin(); it!=mp.end();it++)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}
	return 0;
}
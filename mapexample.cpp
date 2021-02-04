#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<string> v;
	map<string, int> mp;
	map<string, bool> used;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		int m;
		cin>>m;
		v.push_back(s);
		mp[s] = m;
	}
	for(int i = 0;i<v.size();i++)
	{
		if(used[v[i]] == false)
		{
			cout<<v[i]<<" -> "<<mp[v[i]]<<endl;
			used[v[i]] = true;	
		} 
	}
	return 0;
}

// "a" "t" "g" "r" "vf"
//  6   2   1   4   7  
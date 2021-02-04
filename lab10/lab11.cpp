#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

bool cmp(pair<string, double> i, pair<string, double> j) 
{ 
	return (i.second>=j.second);
}

int main()
{
	int n;
	cin>>n;
	int total = 0;
	map<string , int > mp1;
	// multimap<double , string > mp2;

	for(int i=0;i<n;i++)
	{
		string s;
		int p;
		cin>>s>>p;
		mp1[s] += p;
		total += p;
	}
	vector<pair<string, double> > ans;
	map<string , int >::iterator it;
	for(it=mp1.begin(); it!=mp1.end(); it++)
	{
		ans.push_back(make_pair((*it).first ,(*it).second * 100 / double(total)));
	}
	
	sort(ans.begin(), ans.end(), cmp);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i].first<<" "<<ans[i].second<<"%"<<endl;
	}
	return 0;
}
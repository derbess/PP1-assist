#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	vector<int> even;
	vector<int> odd;
	for(int i=0;i<v.size();i++)
	{
		if(v[i] %2 ==0) even.push_back(v[i]);
		else if(v[i] %2 !=0) odd.push_back(v[i]);
	}
	sort(even.begin(),even.end());
	reverse(even.begin(),even.end());
	sort(odd.begin(),odd.end());
	vector<int> ans;

	for(int i=0;i<even.size();i++)
	{
		ans.push_back(even[i]);
	}
	for(int i=0;i<odd.size();i++)
	{
		ans.push_back(odd[i]);
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	
	return 0;
}

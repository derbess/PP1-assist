#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> odd, even;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		if(t%2==0) even.push_back(t);
		else odd.push_back(t);
	}
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());
	for(int i=even.size()-1;i>=0;i--)
	{
		cout<<even[i]<<" ";
	}
	for(int i = 0;i<odd.size();i++)
	{
		cout<<odd[i]<<" ";
	}
	return 0;
}



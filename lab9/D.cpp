#include<iostream>
#include<map>

// #include<vector>
using namespace std;

int main()
{
	int n,target;
	cin>>n>>target;
	map<int, int> m;
	// vector<int> s;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		m[x]++;
	}
	
	cout<<m[target];
	return 0;
}

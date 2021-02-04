#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v[1111];


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
	}
	for(int i=0;i<1111;i++)
	{
		sort(v[i].begin(), v[i].end());
	}
	for(int i=0;i<1111;i++)
	{
		for(int j=0;j<v[i].size();j++)
		{
			cout<<i<< " "<<v[i][j]<<endl;
		}
	}

	return 0;
}
// 5
// 2 3
// 2 2
// 1 2
// 4 3
// 4 2

// 0 1 2 3 4 5 6 7 8 9
//   2 2   2
//     3   3

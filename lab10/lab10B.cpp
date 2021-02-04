#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

long long cnt = -1;
long long f()
{
	cnt++;
	long long res = 1;
	for(int i=0;i<cnt;i++)
	{
		res*=cnt; 
	}
	return res;
}

int main()
{
	long long n;
	cin>>n;
	// int cnt = 0;
	vector<long long> ans(n+1);
	generate(ans.begin(),ans.end(),f);

	for(int i=0;i<n+1;i++)
	    cout << ans[i]<<" ";
	return 0;
}

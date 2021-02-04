#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

bool isPrime(int n)
{
	// cout<<n<<endl;
	if(n==0) return false;
	if(n==1) return false;
	for(int i=2;i<(n);i++)
	{
		if(n%i==0) return false;
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	vector<int> nums;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		nums.push_back(abs(t));
	}

	int mycount = count_if (nums.begin(), nums.end(), isPrime);
	cout<<mycount;
	return 0;
}
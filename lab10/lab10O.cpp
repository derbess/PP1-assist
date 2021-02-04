#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;



string binary(int n)
{
	if(n==1) return "1";
	if(n%2==0) return binary(n/2) + '0';
	return binary(n/2) + '1';
}

void toBin(int n)
{
	cout<<binary(n)<<endl;
}

int main()
{
	int n;
	cin>>n;
	vector<int> a1;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		a1.push_back(t);
	}
	for_each(a1.begin(), a1.end(), toBin);
	// cout<<binary(n);

	return 0;
}
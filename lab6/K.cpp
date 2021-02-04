#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int sum(string s)
{
	int cnt = 0;
	for(int i=0;i<s.size();i++)
	{
		cnt+=s[i]-'0';
	}
	return cnt;
}

int main()
{
	string s;
	cin>>s;
	cout<<sum(s);
	return 0;	
}
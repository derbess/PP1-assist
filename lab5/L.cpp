#include<iostream>
using namespace std;
int main()
{
	string s,t;
	cin>>s;
	for(int i=1;i<s.size();i++)
	{
		if(s[i] < s[i-1]) 
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
// abbc


// a*ra
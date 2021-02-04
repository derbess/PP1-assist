#include<bits/stdc++.h>
using namespace std;
int main()
{
	// freopen("output.txt","w",stdout);
	string s;
	int al[26];
	for(int i=0;i<26;i++)
	{
		al[i] = 0;
	}

	cin>>s;
	string ss = "";
	for(int i=0;i<s.size();i++)
	{
		if(al[s[i] - 'a'] > 0)
		{
			ss+=s[i];
		}
		al[s[i] - 'a']++;
	}
	cout<<ss;
	return 0;
}
//asdfdsasd
//dsasd

#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
 
using namespace std;
int main()
{
	string s;
	string temp = "";
	string ans = "";

	getline(cin,s);
	s+=' ';
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == ' ') 
		{
			if(temp.size()>ans.size())
			{
				ans = temp;
				temp = "";
			}
			else temp = "";
		}
		else 
		{
			temp+=s[i];
		}
	}
	cout<<ans;
	return 0;
}
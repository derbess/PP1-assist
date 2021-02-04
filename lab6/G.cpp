#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

string remove(string s)
{
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a' || s[i]=='i' || s[i]=='o'|| s[i]=='e'|| s[i]=='u'|| s[i]=='A'|| s[i]=='O'|| s[i]=='E'|| s[i]=='I'|| s[i]=='U') 
		{
			s.erase(i,1);
			i--;
		}
	}
	return s;
}

int main()
{
	string s;
	getline(cin,s);
	cout<<remove(s);
	return 0;	
}
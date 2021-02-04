#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

bool valid(string s)
{
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1' || s[i]=='3' || s[i] =='5' || s[i] == '7' || s[i] == '9')
			return false;
	}	
	return true;
}

int main()
{
	string s;
	cin>>s;
	if(valid(s)) cout<<"Valid";
	else cout<<"Not valid";
	return 0;	
}
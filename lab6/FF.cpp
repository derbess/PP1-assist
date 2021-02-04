#include<iostream>
#include<cmath>
using namespace std;

bool isValid(string s, int x)
{
	int digits = 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='0' and s[i]<='9') digits++;
	}
	if(digits>=x) return true;
	else return false;
}

int main()
{
	string s;
	int n;
	cin>>s>>n;
	if(isValid(s,n)) cout<<"YES";
	else cout<<"NO";
	return 0;	
}


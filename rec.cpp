#include<iostream>
using namespace std;

int rec(string s, int index, int cnt)
{
	if(index == s.size()) return cnt;
	else 
	{
		if(s[index]>='0' and s[index]<='9') return rec(s,index+1,cnt+1);
		else return rec(s,index+1,cnt);
	}
}

int main()
{
	string s;
	cin>>s;
	cout<<rec(s,0,0);
	return 0;
}
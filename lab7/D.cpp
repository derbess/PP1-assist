#include<iostream>
using namespace std;

int cnt(string s, int index)
{
	if(index == s.size()) return 0;
	else return cnt(s,index+1) + (s[index]-48);
}
int main()
{
	string s;
	cin>>s;
	cout<<cnt(s,0);
	return 0;
}

#include<iostream>
using namespace std;

int even(string s, int index)
{
	if(index==s.size()) return 0;
	if((s[index]-48)%2 ==0) return even(s,index+1)+1;
	else return even(s,index+1);
}


int main()
{
	string s;
	cin>>s;
	cout<<even(s,0);
	return 0;
}

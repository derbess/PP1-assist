#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	bool isPalindrome = true;
	for(int i = 0; i< s.size();i++)
	{
		if(s[i] != s[s.size() - 1 - i]) isPalindrome = false;
	}
	if(isPalindrome == true) cout<<"YES";
	else cout<<"NO";
	return 0;
}
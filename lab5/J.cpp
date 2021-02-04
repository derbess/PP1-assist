#include<iostream>
using namespace std;
int main()
{
	string s,t;
	cin>>s;
	for(int i=0;i<=s.size();i++)
	{
		bool isPalindrome = true;
		s.insert(i,"*");
		s[i] = s[s.size()-1-i];
		// cout<<s<<endl;
		for(int j = 0; j< s.size(); j++)
		{
			if(s[j] != s[s.size() -1 -j])
			{
				isPalindrome = false;
				break;
			}
		}
		if(isPalindrome == true)
		{
			cout<<"YES";
			return 0;
		}
		s.erase(i,1);

	}
	cout<<"NO";
	return 0;
}
// arra


// a*ra
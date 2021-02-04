#include<iostream>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<t.size();j++)
		{
			if(s[i] == t[j])
			{
				t.erase(j,1);
				s.erase(i,1);
				i--;
				break;
			}
		}
	}
	// cout<<s;
	if(s.size() != 0 || t.size() != 0) {
		cout<<"NO";
	}
	else cout<<"YES";
	return 0;
}
// 133
#include<iostream>
#include<set>
using namespace std;

char down(char c)
{
	if(c>='A' and c<='Z') return char(c-'A'+'a');
	return c;
}

int main()
{
	string s;
	cin>>s;
	set<char> st;
	for(int i=0;i<s.size();i++)
	{
		st.insert(down(s[i]));
	}
	set<char>::iterator it;
	cout<<st.size()<<endl;
	for(it = st.begin(); it!=st.end();it++)
	{
		cout<<*it<<" ";
	}
	return 0;
}
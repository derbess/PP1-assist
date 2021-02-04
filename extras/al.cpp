#include<iostream>
#include<map>
#include<set>
#include<vector>

using namespace std;
int main()
{
	map<char, int> al;
	set<char> st;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		st.insert(s[i]);
	}

	char t;
	cin>>t;
	cout<<st.count(t);

	// map<char, int>::iterator it;
	// for(it=al.begin(); it != al.end(); it++)
	// {
	// 	cout<<(*it).first<<" -> "<<(*it).second<<endl;
	// }

	// for(int i=0;i<26;i++)
	// {
	// 	cout<<char(i+'a')<<" -> "<<al[char(i+'a')]<<endl;
	// }
	return 0;
}
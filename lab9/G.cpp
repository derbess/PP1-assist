#include<iostream>
#include<map>
#include<stack>
using namespace std;

int main()
{
	string s;
	cin>>s;
	stack<char> q;
	for(int i=0;i<s.size();i++)
	{
		if(q.empty()) q.push(s[i]);
		else
		{
			if(q.top()=='1' and s[i] == '1') 
			{
				q.pop();
			}
			else if(s[i]=='0') q.push('0');
			else if(q.top() =='0' and s[i]=='1') q.push('1'); 
		}
	}
	string ans = "";
	while(!q.empty())
    {
       ans=q.top()+ans;
       q.pop(); 
    }
    cout<<ans;
	return 0;
}


#include<iostream>
using namespace std;
bool ponapity(string s1, string s2){
	int cnt = 0;
	if(s1.size()==s2.size())
	{
		for(int i=0;i<s1.size();i++)
		{
			s1[i] = tolower(s1[i]);
			s2[i] = tolower(s2[i]);
			if(s1[i]==s2[i])
			{
				cnt++;
			}
			else if((s1[i]=='B'&&s2[i]=='p')||(s1[i]=='b'&&s2[i]=='P')||(s1[i]=='P'&&s2[i]=='b')||(s1[i]=='p'&&s2[i]=='B')||(s1[i]=='B'&&s2[i]=='P')||(s1[i]=='b'&&s2[i]=='p')||(s1[i]=='P'&&s2[i]=='B')||(s1[i]=='p'&&s2[i]=='b'))
			{
				cnt++;
			}
			else if((s1[i]=='E'&&s2[i]=='i')||(s1[i]=='e'&&s2[i]=='I')||(s1[i]=='I'&&s2[i]=='e')||(s1[i]=='i'&&s2[i]=='E')||(s1[i]=='E'&&s2[i]=='I')||(s1[i]=='e'&&s2[i]=='i')||(s1[i]=='I'&&s2[i]=='E')||(s1[i]=='i'&&s2[i]=='e'))
			{
				cnt++;
			}
		}
		if(cnt==s1.size()) return true;
		else return false;
	}
	else return false;
}

bool bonapity(string s1, string s2)
{
	if(s1.size() == s2.size())
	{
		for(int i=0;i<s1.size();i++)
		{
			s1[i] = tolower(s1[i]);
			s2[i] = tolower(s2[i]);

			if(s1[i] == 'p') s1[i] = 'b';
			else if(s1[i] == 'e') s1[i] = 'i';
			if(s2[i] == 'p') s2[i] = 'b';
			else if(s2[i] == 'e') s2[i] = 'i';
		}
		if(s1==s2) return true;
		else return false;

	}
	else return false;
}
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		string s1,s2;
		cin>>s1>>s2;
		
		if(bonapity(s1,s2)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

ponabity bonabety
bonabity bonabity
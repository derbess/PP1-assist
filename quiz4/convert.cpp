#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
 
using namespace std;
int main()
{
	int n,s,b,i,m,big=0,small=0;
	string ss;
	cin>>n>>s>>b;
	cin>>ss;
	for(i=0;i<n;i++)
	{
		if(ss[i]-0>=65&&ss[i]-0<=90) big=big+s;
		else small=small+b;
	}
	if(small>=big) cout<<big;
	else cout<<small;
	return 0;
}
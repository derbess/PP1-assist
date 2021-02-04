#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
typedef	long long ll;

string genStr(int n)
{
	string s= "";
	for(int i=0;i<n;i++)
	{
		int l = rand()%26;
		int up = rand()%2;
		if(up==1) s+=char(l+'A');
		else s+=char(l+'a');
	}
	return s;
}

string genStr2(int n)
{
	vector<char> bp;
	bp.push_back('B');
	bp.push_back('P');
	bp.push_back('b');
	bp.push_back('p');
	string s="";
	for(int i=0;i<n;i++)
	{
		int num = rand()%4;
		else s+=bp[num];
	}
	return s;
}

int main()
{
	int idx = 3;
	char x[] = "out000000000000.txt";
	for (int ii = 0; ii <= 25; ii++){
		if (x[idx] == '9')  idx++;
		freopen(x, "w", stdout);
		x[idx]++;
        

        int n;
		n = rand() % 100;
		for(int i =0;i<n;i++)
		{
			int sz = rand() %100;
			string s1 = genStr2(sz);
			string s2 = genStr2(sz);
			cout<<s1<<" "<<s2;
		}
        
	}
}
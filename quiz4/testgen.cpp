#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
typedef	long long ll;

// string genStr(int n)
// {
// 	string s= "";
// 	for(int i=0;i<n;i++)
// 	{
// 		int l = rand()%26;
// 		int up = rand()%2;
// 		if(up==1) s+=char(l+'A');
// 		else s+=char(l+'a');
// 	}
// 	return s;
// }
string genStrSpaces(int n)
{
	string s= "";
	for(int i=0;i<n;i++)
	{
		int l = rand()%26;
		int space = rand()%2;
		if(space ==1) s+=' ';
		else s+=char(l+'a');
	}
	return s;
}

// string genStr2(int n)
// {
// 	vector<char> bp;
// 	bp.push_back('E');
// 	bp.push_back('I');
// 	bp.push_back('i');
// 	bp.push_back('e');
// 	string s="";
// 	for(int i=0;i<n;i++)
// 	{
// 		int num = rand()%4;
// 		s+=bp[num];
// 	}
// 	return s;
// }

int main()
{
	int idx = 3;
	char x[] = "out000000000000.txt";
	for (int ii = 0; ii <= 100; ii++){
		if (x[idx] == '9')  idx++;
		freopen(x, "w", stdout);
		x[idx]++;
        

        int n;
		n = rand() % 9876;
		while(n<1000) n = rand()%9876;
		// cout<<n<<" "<<s<<" "<<b<<endl;
		// string s1 = genStrSpaces(n);
		// cout<<s1;
		cout<<n;
        
	}
}
// 9876
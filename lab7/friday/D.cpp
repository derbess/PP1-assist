#include<iostream>
using namespace std;

int sumOfDigits(string s, int index)
{
	if(index == s.size()) return 0;
	else return sumOfDigits(s,index+1) + s[index] - '0';
}

int main()
{
	string s;
	cin>>s;
	cout<<sumOfDigits(s,0);
}

 			

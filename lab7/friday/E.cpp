#include<iostream>
using namespace std;

int sumOfEven(string s, int index)
{
	if(index == s.size()) return 0;
	else if((s[index] - '0')%2 == 0) return sumOfEven(s,index+1)+1;
	else return sumOfEven(s,index+1);
	
}

int main()
{
	string s;
	cin>>s;
	cout<<sumOfEven(s,0);
}

 			

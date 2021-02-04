#include<iostream>
using namespace std;

int reach(int n, int cnt)
{
	if(n==1) return cnt;
	else 
	{
		if(n%3==0) return reach(n/3,cnt+1);
		else if((n-1)%3==0) return reach((n-1)/3,cnt+2);
		else if(n-2 != 0 and (n-2)%3==0) return reach((n-2)/3,cnt+3);
		else if(n%2==0) return reach(n/2,cnt+1);
		else if((n-1)%2==0) return reach((n-1)/2,cnt+1);
		else return reach(n-1,cnt+1);
	}
}
int reach2(int n, int cnt)
{
	if(n==1) return cnt;
	else 
	{
		if(n%3==0) return reach(n/3,cnt+1);
		else if(n%2==0) return reach(n/2,cnt+1);
		else return reach(n-1,cnt+1);
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<reach(n,0)<<" " <<reach2(n,0);
	return 0;
}




/*
39 % 3 
13- 1
12 %3
4 %2
2%2
1


59 -1
58 %2
29 -1
28 %2
14%2
7-1
6%3
2%2
1

59 -1
58 -1
57 %3
19 -1
18 %3
6%3
2%2
1

87 3
29 -1
28 -1
27 /3
9/3
3/3


*/
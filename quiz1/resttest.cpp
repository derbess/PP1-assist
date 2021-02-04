#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
typedef	long long ll;
int main()
{
	int idx = 3;
	char x[] = "out000000000000.txt";
	for (int ii = 0; ii <= 100; ii++){
		if (x[idx] == '9')  idx++;
		freopen(x, "w", stdout);
		x[idx]++;
        int a,b,c;
		a = rand() % 10000;
		b = rand() % 10000;
		c = rand() % 10000;
		
		cout<<a<<" "<<b<<" "<<c;
        
	}
}
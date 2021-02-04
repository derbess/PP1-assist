#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>> n>>k;
    cout<<(n ^ k);
    return 0;
}// 

/*

0101
1010
1111

And  * 
1 & 0 = 0
0 & 1 = 0
0 & 0 = 0
1 & 1 = 1

Or  +
1 | 0 = 1
0 | 1 = 1
0 | 0 = 0
1 | 1 = 1

xor ^
1 ^ 0 = 1
0 ^ 1 = 1
0 ^ 0 = 0
1 ^ 1 = 0


*/
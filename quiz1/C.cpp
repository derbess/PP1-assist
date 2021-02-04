#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, mn = 1001, mx = -1;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        int t;
        cin>>t; // 44 14 41 11 45 13

        if(t > mx) mx = t; // 45
        if(t < mn) mn = t; // 11
    }
    cout<< (mx & mn);
    return 0;
}

// 01010101
// 10101011
// 00000001

// & = *
// 0 & 0 = 0
// 0 & 1 = 0
// 1 & 0 = 0
// 1 & 1 = 1

// | = +
// 0 | 0 = 0
// 0 | 1 = 1
// 1 | 0 = 1
// 1 | 1 = 1

// ^
// 0 ^ 0 = 0
// 0 ^ 1 = 1
// 1 ^ 0 = 1
// 1 ^ 1 = 0

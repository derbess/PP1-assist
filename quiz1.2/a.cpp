#include<iostream>
using namespace std;
int main()
{
    int n, cnt = 0, prev = 1000000000;
    while(cin>>n)
    {
        if(n==0) break;
        if(prev < n) cnt++;
        prev = n;
    }
    cout<<cnt;
}
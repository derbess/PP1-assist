#include<iostream>
using namespace std;
int main()
{
    int n, l, r, cnt = 0;
    cin>>n>>l>>r;
    int a[n];
    for(int i = 1; i <= n;i++)
    {
        cin>>a[i];
    }
    for(int i = l; i <= r; i++)
    {
        cnt += a[i];
    }
    cout<<cnt;
    
    return 0;
}


// long long 9*10^18
// int 2*10^10
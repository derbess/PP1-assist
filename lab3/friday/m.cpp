#include<iostream>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // int a[111111];
    int t, cnt = 0;

    while(cin>>t)
    {
        cnt+=t;
    }
    cout<<cnt;
    
    
    return 0;
}

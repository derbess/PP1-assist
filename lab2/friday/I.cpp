#include<iostream>
using namespace std;
int main()
{
    int n, cntSeven = 0;
    cin>> n;
    for( int i=1; i <= n; i++)
    {
        int t;
        cin>>t;
        if( t % 10 == 7) cntSeven++;
    }
    // cout<<evenCnt<<" "<<oddCnt;
    cout<<cntSeven;
    return 0;
}// 
#include<iostream>
using namespace std;
int main()
{
    int n, evenCnt = 0, oddCnt = 0;
    cin>> n;
    for( int i=1; i <= n; i++)
    {
        int t;
        cin>>t;
        if(t % 2 == 0) evenCnt++;
        else if( t % 2 != 0) oddCnt++;
    }
    cout<<evenCnt<<" "<<oddCnt;
    return 0;
}
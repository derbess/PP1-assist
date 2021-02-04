#include<iostream>
using namespace std;
int main()
{
    int n, max = 1111111111;
    cin>> n;
    for( int i=1; i <= n; i++)
    {
        int t;
        cin>>t;
        if(max < t) max = t;
    }
    cout<<max;
    return 0;
}
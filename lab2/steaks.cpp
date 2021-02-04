#include<iostream>
using namespace std;
int main()
{
    int k,n,m,ost,c,ans,d;
    cin>>n>>k;
    if(n <= k) ans = 2;
    else {
        c = n / k;
        ost = n % k;
        if(ost == 0) ans = 2 * c;
        else ans = 2 * c  + 1;
    }
    cout<<ans;
}


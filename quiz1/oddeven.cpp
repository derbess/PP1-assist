#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int odd = 0, even = 0;
    while(n>9)
    {
        if( ( n % 10 ) % 2 == 0) even += ( n % 10 );
        else odd += ( n % 10 );
        n /= 10;
    }
    if(n % 2 == 0) even += n;
    else odd += n;
    int ans = 0;
    if(even > odd) ans = even;
    else if(even == odd) ans = even + odd;
    else ans = odd;
    cout<<ans;
    return 0;
}

// <86400
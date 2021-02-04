#include<iostream>
using namespace std;
int main()
{
    int n, hh, mm, ss;
    cin>>n;
    hh = n / 3600;
    n = n - hh * 3600;
    mm = n / 60;
    n = n - mm * 60;
    ss = n;
    if(hh >= 0 && hh <= 9) cout<<"0"<<hh<<":";
    else cout<<hh<<":";
    if(mm >= 0 && mm <= 9) cout<<"0"<<mm<<":";
    else cout<<mm<<":";
    if(ss >= 0 && ss <= 9) cout<<"0"<<ss;
    else cout<<ss;
    
    return 0;
}

// <86400
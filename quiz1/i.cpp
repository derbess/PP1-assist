#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int hh = n / 3600; //   4000  1 
    int mm = (n % 3600) / 60; // 400/60   6   40
    int ss = n % 60;

    if(hh>=0 && hh<=9) cout<<0; //01:
    cout<<hh<<":";

    if(mm>=0 && mm<=9) cout<<0;
    cout<<mm<<":";
    
    if(ss>=0 && ss<=9) cout<<0;
    cout<<ss;
    cout<<endl;
    
    printf( "%02d:%02d:%02d", hh ,mm,ss);

    return 0;
}

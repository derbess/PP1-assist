#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int d,c,p,n;
    cin>>d>>c>>p>>n;
    int cents = d * 100 + c;
    int spent = p * n;
    int ost = cents - spent;
    cout<<ost/100<<" "<<ost%100;
    return 0;
}
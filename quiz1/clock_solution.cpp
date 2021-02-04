#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int hh = n/3600;  //60*60
    int mm = (n%3600)/60;// 0 7 
    int ss = n%60; //41

    if(0 <= hh && hh <= 9) cout<<'0';
    cout<<hh<<":";
    if(0 <= mm && mm<=9) cout<<'0';
    cout<<mm<<":";
    if(0 <= ss && ss<=9) cout<<'0';
    cout<<ss;

    return 0;
}
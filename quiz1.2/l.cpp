#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int hh = n/3600; // 4000     1 
    int mm = (n%3600)/60;  // 400  6
    int ss = n%60;
    cout<<hh<<":"<<mm<<":"<<ss;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; // 2
    string s = "*";
    // cout<<s<<endl;
    for(int i=0;i<n;i++) //1  2 
    {
        cout<<s<<endl;  //*  -*
        s = "-" + s;  //--*
    }


    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n, max = -999999999;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        if(t > max) max = t;
    }
    cout<<max;
    return 0;
}



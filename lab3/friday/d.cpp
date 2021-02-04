#include<iostream>
using namespace std;
int main()
{
    int n, max = -999999999, pos = 0;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        int t;
        cin>>t;
        if(t > max) 
        {
            max = t;
            pos = i;
        }
    }
    cout<<pos;
    return 0;
}

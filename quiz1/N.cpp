#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        if(t<=437)
        {
            cout<<"Crash "<<i;
            return 0;
        }
    }
    cout<<"No crash";
    return 0;
}
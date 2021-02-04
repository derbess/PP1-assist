#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long mx1 = -1;
    long long mx2 = -1;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        if(t > mx1)
        {
            mx2 = mx1;
            mx1 = t;
        }
        else if(t > mx2 and t != mx1)
        {
            mx2 = t;
        }
    }
    if(mx2 == -1) cout<<mx1;
    else cout<<mx2;
    return 0;
}


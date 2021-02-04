#include<iostream>
using namespace std;
int main()
{
    long long  n, sum = 0;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        int t;
        cin>>t;
        sum += t;
        
    }
    cout<<sum;
    return 0;
}


// long long 9*10^18
// int 2*10^10
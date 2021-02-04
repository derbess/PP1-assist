#include<iostream>
using namespace std;
int main()
{
    int n;
    int mn = 111111111;
    int mx = -111111111;
    cin>>n;
    int array[n];
    for(int i = 0;i<n;i++)
    {
        cin>>array[i];
        if(array[i]>mx) mx = array[i];
        if(array[i]<mn) mn = array[i];
    }
    for(int i=0;i<n;i++)
    {
        if(array[i] == mx) array[i] = mn;
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}


// long long 9*10^18
// int 2*10^10
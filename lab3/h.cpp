#include<iostream>
using namespace std;
int main()
{
    long long n, l,r, sum = 0;
    cin>>n>>l>>r;
    int arr[n];
    for(int i = 1;i <= n; i++) 
    {
        cin>>arr[i]; 
    }
    for(int i = l; i <= r; i++ ) //4 3 2 1 0
    {
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}


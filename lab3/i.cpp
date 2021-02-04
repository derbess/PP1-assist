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

//variant 1
    for(int i = 1; i < l; i++ ) //4 3 2 1 0
    {
        cout<<arr[i]<<" ";
    }
    for(int i = r; i>=l; i--)
    {
        cout<<arr[i]<<" ";
    }
    for(int i = r + 1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    // 3 6
    // 1 2 3 4 5 6 7 8 9 
    // 1 2 6 5 4 3 7 8 9

//variant2


    // for(int i = 0; i <= (r-l)/2; i++ ) //4 3 2 1 0   
    // {
    //     // cout<<arr[l+i]<<" "<<arr[r - ( l-i ) ]<<endl;
    //     swap(arr[l+i], arr[r - i ] );    
    // }
    // // 3 6
    // // 1 2 3 4 5 6 7 8 9
    // // 1 2 6 5 4 3 7 8 9
    // for(int i = 1; i <= n; i++ )
    // {
    //     cout<<arr[i]<<" ";
    // }
    return 0;
}


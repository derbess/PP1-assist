#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; // 5
    int arr[n]; //  [0][1][2][3][4]
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i< n; i++)
    {
        if(arr[i] % 2 != 0) cout<<arr[i]<<" ";
    }
    // cout<<maxindex+1;
    return 0;

    
}


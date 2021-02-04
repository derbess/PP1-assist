#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //5
    int arr[n];// [0][1]..[4]
    for(int i = 0;i < n; i++) // 0 1 2 3 4 || 4 3 2 1 0
    {
        cin>>arr[i]; 
    }
    for(int i = n - 1; i >= 0; i-- ) //4 3 2 1 0
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


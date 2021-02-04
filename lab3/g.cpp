#include<iostream>
using namespace std;
int main()
{
    long long n, maxi = -111111111, mini = 1111111111;
    cin>>n; //5
    int arr[n];// [0][1]..[4]
    for(int i = 0;i < n; i++) // 0 1 2 3 4 || 4 3 2 1 0
    {
        cin>>arr[i]; 
        if(arr[i] > maxi) maxi = arr[i];
        if(arr[i] < mini) mini = arr[i];
    }
    for(int i = 0; i < n; i++ ) //4 3 2 1 0
    {
        if(arr[i] == maxi) arr[i] = mini;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int n, maxindex = -1, maxvalue = -1111111;
    cin>>n; // 5
    int arr[n]; //  [0][1][2][3][4]
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i< n; i++)
    {
        if(arr[i] > maxvalue)
        {
            maxvalue = arr[i];
            maxindex = i;
        }
    }
    cout<<maxindex+1;
    return 0;
}
//index [0][1][2][3][4]
//value [2][7][3][4][8]

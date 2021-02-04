#include<iostream>
using namespace std;
int main()
{
    int n, m, index = 0;
    bool q = false;
    cin>>n>>m;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] == m && q == false ) 
        {
            index = i;
            q = true;
        }
        else if(arr[i] > m && q == false){
            index = i;
            q = true;
        }
    }
    if(q == false) cout<<n;
    else cout<<index;
    return 0;
}
// 6 1
 // -1 2 3 4 5 6  


// long long 9*10^18
// int 2*10^10
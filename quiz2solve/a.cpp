#include <iostream>
using namespace std;

int main(){
    int n, mx = -1, mn = 101;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] > mx) mx = a[i];
        if(a[i] < mn) mn = a[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++) {
        if(a[i]<mx && a[i]> mn)  cnt++;
    }
    cout<<mx - mn - 3;
    return 0;
}
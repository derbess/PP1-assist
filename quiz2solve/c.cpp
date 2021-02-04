#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mx = -1;
    // int a[n];
    int occur[1001] = {0};
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        occur[t]++;
        if(occur[t]>mx) mx = occur[t];
    }
    for(int i=1000;i>=0;i--) {
        if(occur[i] == mx) cout<<i<<" ";
    }

    return 0;
}
/*

5
4 9 4

0 1 2 3 4 5 6 7 8 9 ..... 1001
0 0 0 0 2 0 0 0 0 1 ...... 0
*/
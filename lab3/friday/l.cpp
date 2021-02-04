#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int ai = 0, bi = 0, c[n+m], index = 0;
    int ;
    while(ai < n && bi < m)  // while(ai!=n || bi!=m)
    {
        if(a[ai] < b[bi]) {
            c[index] = a[ai];
            ai++;
        } else if(a[ai] > b[bi]) {
            c[index] = b[bi];
            bi++;
        } else {
            c[index] = a[ai];
            ai++;
        }
        index++;
    }
    if(ai != n) {
        for(int i = ai;i<n;i++)
        {
            c[index] = a[i];
            index++;
        }
    } else if(bi != m) {
        for(int i = bi;i<m;i++)
        {
            c[index] = b[i];
            index++;
        }
    }
    for(int i =0; i<index;i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}

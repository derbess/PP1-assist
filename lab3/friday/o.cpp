#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            if(a[i] > a[j]) swap(a[i],a[j]);
        }
    }    
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }

    
    return 0;
}



/*

1 2 3 4 7
value1 = 1
    value2 = 1
    value2 = 4
    value2 = 3
    value2 = 7
    value2 = 2
value1 = 2
    value2 = 4
    value2 = 4
    value2 = 7
    value2 = 3
value1 = 3
    value2 = 4
    value2 = 7
    value2 = 4
value1 = 4
    value2 = 7
    value2 = 7
value1 = 7
    value1 = 7









*/
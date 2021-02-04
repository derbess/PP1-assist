#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;

    //1
    // for( int i=1; i <= n; i=i*2) // 1 2 4 8 16 32 
    // {
    //     cout<<i<<" ";
    // }

    //2
    int i = 1;
    while(i <= n) 
    {
        cout<<i<<" ";
        i = i*2;
    }
    return 0;
}// 
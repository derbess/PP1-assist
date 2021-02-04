#include<iostream>
using namespace std;
int main()
{
    int n, cntZero = 0;
    cin>> n;
    for( int i=1; i <= n; i++)
    {
        int t;
        cin>>t;
        
        while(t>9) // 1001  100  10
        {
            if(t % 10 == 0) cntZero++; //1 0 0
            t = t / 10;  // 100  10 1
        }

    }   
    cout<<cntZero;
    
    return 0;
}// 
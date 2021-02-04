#include<iostream>
using namespace std;
int main()
{

    int n, cnt = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        while(t > 9) { // 103  10  1  
            if(t % 10 == 0) cnt++;  
            t/=10;   
        }
        if( t % 10 == 0) cnt++;
    }
    cout<<cnt;
}


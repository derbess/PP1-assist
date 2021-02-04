#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;

    //1
    // for( int i=1; i <= n; i++) //1 2 3 4
    // {
    //     if(i*i < n) cout<<i*i<<endl;
    // }

    //2
    int i = 1;
    while(i*i < 10) 
    {
        cout<<i*i<<endl;
        i++;
    }
    return 0;
}// 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if( n % 4 == 0 && ( n % 100 != 0 || n % 400 == 0) )
    {
        cout<<"13/09/";
    }
    else cout<<"12/09/";

    // if(n<10) cout<<"000"<<n;
    // else if(n<100) cout<<"00"<<n;
    // else if(n<1000) cout<<"0"<<n;
    // else cout<<n;

    printf( "%0004d", n );

    

    return 0;
}
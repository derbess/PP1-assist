#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
//           1             4                   2                   3    
    if( ( n / 1000) == ( n % 10 ) && ( (n / 100) % 10) == ( n / 10) % 10 )
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;

}
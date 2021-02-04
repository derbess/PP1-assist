#include<iostream>
using namespace std;
int main()
{
    int n, oddsum = 0, evensum = 0;
    cin>>n;
    while(n!=0)
    {
        if( (n%10) % 2 == 0 ) evensum += (n % 10);
        else oddsum += (n % 10);
        n = n / 10;
    } 
    if(evensum > oddsum) cout<<evensum;
    else if(evensum < oddsum) cout<<oddsum;
    else cout<<(evensum + oddsum);
    return 0;
}

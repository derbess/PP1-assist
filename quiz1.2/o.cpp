#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    char o;
    cin>>n>>o>>m;
    if(o=='+') cout<<n<<" + "<<m<<" = "<<n+m;
    
    else if(o=='-') cout<<n<<" - "<<m<<" = "<<n-m;
    
    else if(o=='*') cout<<n<<" * "<<m<<" = "<<n*m;
    
    else if(o=='/') cout<<n<<" / "<<m<<" = "<<n/m;
    return 0;
}

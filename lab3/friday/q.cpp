#include<iostream>
using namespace std;
int main()
{
    int n;
    bool f = false;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) 
        {
            cout<<"No";
            f = true;
            break;
        }
    }
    if(f==false) cout<<"Yes";
    
    return 0;
}



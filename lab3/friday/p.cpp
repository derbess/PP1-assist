#include<iostream>
using namespace std;
int main()
{
    int n;
    bool f = false;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n==i*i) 
        {
            cout<<"Yes";
            f = true;
            break;
        }
    }
    if(f == false) cout<<"No";
    return 0;
}



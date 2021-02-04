#include<iostream>
using namespace std;
int main()
{

    int n, cnt = 0;
    cin>>n;
    for(int i = 1;i <= n; i++)
    {
        if( i*i <= n ) cout<< i*i <<endl;
        else break;
    }
}


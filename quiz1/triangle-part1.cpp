#include<iostream>
using namespace std;
int main()
{
    string s = "*";
    string add = "-";
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<s<<endl;
        s = add + s;
    }
    return 0;
}
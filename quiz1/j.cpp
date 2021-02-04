#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s = "*";
    for(int i=1; i <= n; i++)
    {
        cout<<s<<endl;
        s = "-" + s; 
    }
    // " ---* "
    
    return 0;
}

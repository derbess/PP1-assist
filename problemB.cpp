#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int first, last;
    cin>>a>>b;

    first = b / 100;
    last = b % 10;

    cout<<a + first + last;
    return 0;
}


//100 <= x <= 999
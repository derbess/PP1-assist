#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;   //12
    int b1, b2, b3, b4;
    b4 = n%2; // 12%2  =  0
    n = n/2;  // 12/2 = 6
    b3 = n%2; // 6%2 = 0
    n = n/2;  // 6/2 = 3
    b2 = n%2; // 3%2 = 1
    n = n/2;  // 3/2 = 1
    b1 = n%2; // 1%2 = 1
 

    cout<<b4*8 + b3*4 + b2 * 2 + b1*1; 
    return 0;
}
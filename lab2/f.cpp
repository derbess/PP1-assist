#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin>>n;   // 5
    for(int i=1;i<=n;i++)
    {
        sum += i;  // sum = sum + i
        /*
        i = 1
        0 = 0 + 1
        sum = 1

        i = 2
        1 = 1 + 2
        sum = 3

        i = 3
        3 = 3 + 3
        sum = 6

        i = 4
        6 = 6 + 4
        sum = 10

        i = 5
        10 = 10 + 5
        sum = 15
        */
    }
    cout<<sum;
}


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c, sum, years = 0;
    cin>>a>>b>>c;
    sum = a;
    while(sum<c)
    {
        sum += sum*b/100;
        years++;
    }
    cout<<years;
    
    return 0;
}

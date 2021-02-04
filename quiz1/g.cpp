#include<iostream>
using namespace std;
int main()
{
    int n,a,b, day = 0, cur = 0;
    bool isClimbing = true;
    cin>>n>>a>>b;
    while(cur<n)
    {
        day++;
        cur+=a;
        if(cur>=n) {
            break;
        }
        cur-=b;
        if(cur <= 0) {
            isClimbing = false;
            break;
        }
    }
    if(isClimbing) cout<<day;
    else cout<<"NO";
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    string s;
    int mx = -1;
    cin>>s;
    int cur = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0') cur++;
        else {
            if(mx<cur) 
            {
                mx = cur;
                cur = 0;
            }
        }
    }
    if(mx<cur) 
    {
        mx = cur;
        cur = 0;
    }
    cout<<mx;

    return 0;
}
// 000011100000000000 cur = 11
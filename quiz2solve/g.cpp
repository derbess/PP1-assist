#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans = "";
    int a[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        a[s[i] - 'a']++;
        if(a[s[i] - 'a']>1) ans += s[i];
    }
    cout<<ans;
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    string s;
    bool is = true;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != s[s.size()-1-i]) is = false;
    }
    if(is == true)
    {
        for(int i = 0;i<s.size();i++)
        {
            if(s[0] != s[i])
            {
                cout<<s.size()-1;
                return 0;
            }
        }
        cout<<0;
        return 0;
    }
    else {
        cout<<s.size();
    }
    return 0;
}
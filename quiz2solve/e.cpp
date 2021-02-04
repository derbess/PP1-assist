#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int digits[10] = {0};
    for(int i=0;i<s.size();i++)
    {
        digits[s[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        if(digits[i]==0) continue;
        else 
        {
            cout<<i<<": "<<digits[i]<<endl;
        }
    }
    return 0;
}
// 0 48
// 1 49
// 2  50 - 48

// 231546

// 0 1 2 3 4 5 6 7 8 9
// 1 0 1 1 0 0 0 0 0 0
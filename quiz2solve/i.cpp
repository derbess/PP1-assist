#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int x = 0, y = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'B') y--;
        else if(s[i] == 'F') y++;
        else if(s[i] == 'R') x++;
        else if(s[i] == 'L') x--;
    }
    if(x == 0 && y == 0) 
    {
        cout<<"Chill Yelnur";
        return 0;
    }
    else {
        while(y>0)
        {
            cout<<'B';
            y--;
        }
        while(y<0)
        {
            cout<<'F';
            y++;
        }
        while(x>0)
        {
            cout<<'L';
            x--;
        }
        while(x<0)
        {
            cout<<'R';
            x++;
        }
    }
    return 0;
}
// B F L R
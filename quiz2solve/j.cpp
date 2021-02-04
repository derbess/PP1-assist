#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int q = 0;q<n;q++)
    {
        for(int w = 0; w<m; w++)
        {
            a[q][w] = 'X';
        }
    }
    int i =0, j = 0;
    for(int k=0;k<s.size();k++)
    {
        a[i][j] = '*';
        if(s[k] == 'D') i++;
        else if(s[k] == 'R') j++;
        else if(s[k] == 'U') i--;
        else if(s[k] == 'L') j--;
    }
    a[i][j] = '*';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
// B F L R
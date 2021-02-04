#include <iostream>
using namespace std;
void readArray(int * a, int n){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}
string solve(int * a,int x, int n){
    for(int i = 0; i < n; i++){
        if (a[i]==x){
            return "Yes";
        }
    }
    return "No";
}
int main(){
    int n;
    cin >> n;
    int a[n];
    readArray(a, n);
    int x;
    cin>>x;
    string ans = solve(a, x, n);
    cout<<ans;
    return 0;
}
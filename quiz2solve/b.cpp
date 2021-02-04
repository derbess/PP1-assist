#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >>a[i][j];
        }
    }
    for(int i = n-1; i>= 0; i--) {
        for(int j = 0; j+i < n; j++) {
            cout<<a[j][j+i]<<" ";
        }
        cout<<endl;
    }
    for (int i = 1; i < num; i++) {
        for (int j = 0; j+i < num; j++) {
            cout<<a[j+i][j]<<" ";
        } 
        cout<<endl;
    }
    return 0;
}
/*
3   0 1 2
  0|1 2 3
  1|4 5 6 
  2|7 8 9
 i = 2 j = 0 2<3
    ->3 endl
 i = 2 j = 1 3<3
 i = 1 j = 0 1<3
     ->2 
 i = 1 j = 1 2<3
     ->6 
 i =1 j =2
 i = 0 j =0 
 i = 0 j =1
 i = 0 j =2
*/
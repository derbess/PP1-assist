#include <bits/stdc++.h>
using namespace std;
float fac[1111];
void func()
{
    int coef = 1;
    for(int i=1;i<=20;i++)
    {
        coef *= i;
        fac[i] = coef; 
    }
}

int main() {

    func();
    float n, sum = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
       
        sum += float(1 / float(fac[i]));
    }
    cout << setprecision(6) << sum;
}   
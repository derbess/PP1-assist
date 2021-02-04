#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, sum = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        sum+=t;
    }
    cout<<"Average: "<<(double)sum/n<<endl;
    cout<<"Sum: "<<sum;
    return 0;
}
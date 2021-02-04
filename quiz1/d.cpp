#include<iostream>
using namespace std;
int main()
{
    int a,i,b,k;
    cin>>a>>i;
    a ^= (1<<i); 
    cout<<a;

    //1 01 & 1
    //2 01 & 1
    
    //2  001  
    //5  001 

    //4  0001
    //2  0001


    //4  0010 & 1 int x = 0 
    //5  0101 & 1 int y = 1


    // 0 & 1 = 0
    // 1 & 1 = 1
    return 0;
}



//A
// 1010101001
//     100000

// 1010

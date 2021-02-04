#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[2*n+1][2*n+1];
    int cnt = (2*n+1)*(2*n+1) - 1;
    int x[4];
    int y[4];
    x[0] = 0;
    y[0] = 1;
    x[1] = -1;
    y[1] = 0;
    x[2] = 0;
    y[2] = -1;
    x[3] = 1;
    y[3] = 0;

    int pointX = 2*n;
    int pointY = 0; 
    int dir = 0;
    while(cnt > 0)
    {
        // a[point]
        while(cnt > 0 && pointX >= 0 && pointX < 2*n+1 && pointY >= 0 &&  pointY < 2*n+1 && a[pointX][pointY] == 0)
        {
            a[pointX][pointY] = cnt;
            cnt--;
            pointX+=x[dir];
            pointY+=y[dir]
        }
        pointX-=x[dir];
        pointY-=y[dir];
        dir = (dir+1) % 4;
    }
    for(int i = 0;i<2*n+1;i++)
    {
        for(int j = 0; j< 2*n+1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


/*



13 14 15 16 1
12 23 24 17 2
11 22 25 18 3
10 21 20 19 4
9  8  7  6  5


*/
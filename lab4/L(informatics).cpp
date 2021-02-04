#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            a[i][j] = 0;
        }
    }
    int k = 0;
   	int d = 0;
   	int r, c;
    while(d < n * m)
    {
	    a[r][c] = k++;
	    d++;
	    if (c == 0 or r == n - 1)
	    {

	        if (c == 0)
	        {
	            if (r + c + 1 < m)
	            { 
	                c = r + c + 1;
	                r = 0;
	            }
	            else
	            {
	                r = r - m + 2;
	                c = m - 1;
	            }
	        }
	        else
	        {
	            if(r == n - 1)
	            {
	                if (m - c - n - 1 >= 0)
	                {
	                    c = r + c + 1;
	                    r = 0;
	                }
		            else
		            {
		                r = c + r - m + 1;
		                c = m - 1;
		            }
		        }
	        }
		}
	    else
	    {
	        r++;c--;
	    }
    }

    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            if (a[i][j] < 10 ) cout << "   ";
            else if (a[i][j] < 100) cout << "  ";
            else if (a[i][j] < 1000) cout << " ";
            cout << a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}


/*




1, 2, 4,
3, 5, 7,
6, 8, 10,
9, 11,13,
12,14,15]

[1,2,7,3,8,13,
4,9,14,5,10,15,
6,11,16,12,17,18]

*/
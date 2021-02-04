#include<iostream>
#include<cmath>
using namespace std;



void d()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int a[111], b[111], used[111];
	int cnt = 0;
	int m = n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				cnt++;
				b[j] = b[m-1];
				m--;
				break;	
			} 
		}
	}
	cout<<cnt;

}


int main()
{
	
	d();
	return 0;	
}


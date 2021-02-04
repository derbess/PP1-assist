#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int nums[10];
	for(int i=0;i<10;i++)
	{
		nums[i] = 0;
	}

	for(int i=0;i<s.size();i++)
	{
		int d = (s[i] - '0');
		nums[d] = nums[d] + 1;
	}
	// for(int i=0;i<10;i++)
	// {
	// 	cout<<nums[i]<<" ";
	// }
	int prev = -1;
	for(int i=0;i<10;i++)
	{

		if(nums[i]!=0 && prev != -1)
		{
			if(nums[i] != prev)
			{
				cout<<"NO";
				return 0;
			}

		}
		else if(nums[i]!=0 && prev == -1)
		{
			prev = nums[i];
		}
		else if(nums[i] == 0) continue;
	}
	cout<<"YES";
	return 0;
}
// 133

// '0' 
// '1'
// 2

// 123412341234123412341234123412341234
//9 1  9 2  9 3  9 4

// 0 1 2 3 4 5 6 7 8 9
// 0 0 1 1 1 0 0 1 0 0
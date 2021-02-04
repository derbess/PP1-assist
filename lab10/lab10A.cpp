#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	vector<string> names;
	vector<int> marks;
	cin>>n;
	// int marks2[n];
	// string names2[n];
	for(int i=0;i<n;i++)
	{
		string s;
		int m;
		cin>>s>>m;
		names.push_back(s);
		marks.push_back(m);
		// names2[i] = s;
		// marks2[i] = m;
	}
	sort(names.begin(),names.end());
	sort(marks.begin(),marks.end());

	// sort(names2, names2 + n);
	// sort(marks2, marks2 + n);
	for(int i=0;i<n;i++)
	{
		cout<<names[i]<<" "<<marks[i]<<endl;
	}
	return 0;
}
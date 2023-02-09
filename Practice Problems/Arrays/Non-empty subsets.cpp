/*
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/minor-4-41918cb8/

Sample Input
2
4
1 3 5 7
3
2 6 14
Sample Output
1
2

*/

#include <iostream>
using namespace std;

int func(int a[],int n)
{
	 int m =a[0];
	 for(int i=0;i<n;i++)
	 m=min(a[i],m);
	 return m;
}
int main() {
	int t;
	cin >> t;    //Reading input from STDIN
	int n;
	while(t>0)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<func(a,n)<<endl;
		t--;
	}
}

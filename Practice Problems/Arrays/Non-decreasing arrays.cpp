/*
hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/make-it-non-decreasing-7d3391fd/

Sample Input
2
3
2 1 3
2
5 1
Sample Output
2 2 3
5 5
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int test_cases;
	cin>>test_cases;
	while(test_cases)
	{
		test_cases--;
		int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int i=0,num=a[0];
		while(i<n)
		{
			if(num%a[i] == 0)
			{
				cout<<num<<" ";
				i++;
			}
			else
			{
				num = num + (a[i] - num%a[i]);
			}
		}
		cout<<endl;
	}
	return 0;
}

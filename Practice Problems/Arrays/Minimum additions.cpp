/*
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/minimum-additions-0142ac80/

Sample Input
2
2 1
3 1
2 2
2 1
Sample Output
1
0
*/


#include <iostream>
using namespace std;

void fun()
{
	unsigned long long N,K;
	cin>>N>>K;
	unsigned long long  s=0;
	for(int i=0;i<N;i++)
	{
		unsigned long long tmp;
		cin>>tmp;
		s=s+tmp;
	}
	unsigned long long  average = s/N;
	unsigned long long x;
	if(average<=K)
	{
		cout<<"0";
	}	
	else
	{
		x= ((s/(K+1)) -1*N +1);
		cout<<x;
	}
	
}
int main() {
	int t;
	cin >> t;
	while(t)
	{	fun();	t--;cout<<endl;	}
	return 0;
}

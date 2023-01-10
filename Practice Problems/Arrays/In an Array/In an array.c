/*
 		
		https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/in-an-array-9fbe4c12/

	Sample Input
	5 2 1 0
	1 2 3 2 1

	Sample Output
	6

*/
#include<iostream>
#include<map>
using namespace std;

int main() {
	int n,k,x,y;
	unsigned long long int mpcount=0;
	cin>>n>>k>>x>>y;
	int mp[10001]={};
	int mx=-1,mn=1001;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		mx=max(mx,x);
		mn=min(mn,x);
		mp[x]++;
	}
	int i,j;
    cout<<endl;
	for(i=mn;i<=mx;i++)
	{
		for(j=i;j<=mx;j++)
		{
			if(((i + j)%k == x ) and ((i * j)%k == y))
			{
				mpcount+= mp[i] * mp[j];
			}
		}
	}
	cout<<mpcount<<endl;
}
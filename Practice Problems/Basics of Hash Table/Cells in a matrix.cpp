/*

https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/easy-23-6031def9/

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k;
	cin>>n>>k;
	list<int>	a,b;
	for(int i=1;i<=n;i++)
	{
		a.push_back(i);
		b.push_back(i);
	}
	int x,y;
	for(int i=0;i<k;i++)
	{	
		cin>>x>>y;
		a.remove(x);
		b.remove(y);
		//cout<<a.size()<<" "<<b.size()<<"\n";
		cout<<a.size()*b.size()<<" ";
	}

}

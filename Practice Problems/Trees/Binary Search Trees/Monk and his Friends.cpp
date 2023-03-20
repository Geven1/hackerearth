/*
hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/
*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long
void  fun()
{
	int n,m;
	cin>>n>>m;
	set<ll> mp;
	int i=0;
    ll tmp,t;
	for(i=0;i<n;i++)
	{	cin>>tmp;
		mp.insert(tmp);
	}
	int var =m,x,y=mp.size();
	while(var--)
	{
        x=mp.size();
		cin>>t;
        mp.insert(t);
        y=mp.size();
		if(x==y)   cout<<"YES\n";
		else cout<<"NO\n";
	}

	
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{ fun();cout<<"\n";}
}

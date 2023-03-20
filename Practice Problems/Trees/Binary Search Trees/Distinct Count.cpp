/*
https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void fun()
{
	int n,x;
    cin>>n>>x;
	set<ll> st;
	int i=n;
	ll tmp;
	while(i--)
	{
		cin>>tmp;
		st.insert(tmp);
	}
	if(st.size() > x)	cout<<"Average";
	else if(st.size() == x) cout<<"Good";
	else cout<<"Bad";
}

int main(){
	int t;
    cin>>t;
	while(t--)
	{
		fun();cout<<"\n";
	}
	return 0;
}

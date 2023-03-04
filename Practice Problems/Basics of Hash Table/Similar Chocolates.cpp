/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/notebook-pages-dbad75a5/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll divisor(ll n)
{
	if(n==2 || n==3)	return 2;
	ll count=0,i=1;
	for(i=1;i<sqrt(n);i++)
	{
		if(n%i==0)	count+=2;
	}
	if(i*i == n)
	count++;
	return count;
}
int main() {
	ll n;cin>>n;
	ll a[n];
	map<ll,ll> mp;
	map<ll,ll> ::iterator it;
	for(ll i=0;i<n;i++)	
	{
		cin>>a[i];
		ll x=divisor(a[i]);
		mp[x]++;
	}
	ll cnt=0;
	for(it = mp.begin();it!=mp.end();it++)
	{
		cnt+=(it->second)*(it->second-1)/2;
	}
	cout<<cnt;
	
}

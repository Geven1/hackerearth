/*
hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/unusual-construction-3ec2e03f/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void fun()
{
	ll n,m;
	cin>>n>>m;
	ll tmp=m,mx=-1;
	map<pair<ll,ll>,ll> map_count;
	map<pair<ll,ll>,ll> map_weight;
	while(tmp--)
	{
		ll l,r,w;
		cin>>l>>r>>w;
		map_count[{l,r}]++;
		mx = max(mx,map_count[{l,r}]);
		map_weight[{l,r}]+=w;
	}
  //BYGKS
	map<pair<ll,ll>,ll> ::iterator it;
	ll ans=0;
	for(it = map_count.begin();it!=map_count.end();it++)
	{
        if(it->second!=mx)
		ans+=map_weight[{it->first.first,it->first.second}];
	}
    cout<<ans<<"\n";
}
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		fun();
	}
}

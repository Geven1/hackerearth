/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/suzakus-festivals-14dacd7c/

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fun(){
	int n;	cin>>n;
	map<string,priority_queue<ll , vector<ll>, greater<ll>>> mp;
	map<string,priority_queue<ll , vector<ll>, greater<ll>>> :: iterator it;
	string x,ms;	ll y,mx=0;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		mp[x].push(y);
        if(mp[x].size()>3){       mp[x].pop();    }
	}
    int i=0;
    for(it = mp.begin();it!=mp.end();it++)
    {
        i=0;
        y=0;
        while(!it->second.empty())
        {
            y+=it->second.top();
            it->second.pop();
        }
        
        if(y>mx)
        {
            ms=it->first;   
            mx=y;   
        }
        else if(y==mx)
        {
            ms=min(ms,it->first);
        }
        
    }
    cout<<ms<<" "<<mx<<"\n";
	
}
int main() {
	int t;cin>>t;
	while(t){t--;fun();}
}

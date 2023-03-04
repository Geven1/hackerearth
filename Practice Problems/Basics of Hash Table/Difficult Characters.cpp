/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/difficult-characters/
*/

#include<bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long

void fun()
{
	string s;
	cin>>s;
	ll zise = s.size();
	ll a[26]={0};
	for(ll i=0;i<zise;i++)
	{
		a[s[i]-'a']+= 1;
	}
	map<ll,priority_queue<char,vector<char>>> mp;
	map<ll,priority_queue<char,vector<char>>> ::iterator it;
	//map<ll,priority_queue<string,vector<string>,greater<string>>> :: iterator it;
	for(int i=0;i<26;i++)
	{
		mp[a[i]].push((char)('a'+i));
	}
	for(it=mp.begin();it!=mp.end();it++)
	{
		while(!it->second.empty())
		{
			cout<<it->second.top()<<" ";
			it->second.pop();
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--){fun();cout<<"\n";}
	return 0;
}

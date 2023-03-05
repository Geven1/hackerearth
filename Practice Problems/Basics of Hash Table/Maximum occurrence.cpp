/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-occurrence-9/
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	getline(cin,s);
	map<char,int> mp;
	map<char,int> ::iterator it;
	int l=s.size();
	for(int i=0;i<l;i++)
	{
		mp[s[i]]++;
	}
	int mx=-1;
	char c;
	for(it=mp.begin();it!=mp.end();it++)
	{
		if(it->second > mx)
		{
			mx=it->second;
			c=it->first;
		}
		else if(it->second == mx)
		{
			c=min(c,it->first);
		}
	}
	cout<<c<<" "<<mx;
}

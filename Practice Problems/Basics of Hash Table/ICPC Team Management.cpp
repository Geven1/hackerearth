/*
hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/icpc-team-management/
*/

#include <iostream>
#include<map>
using namespace std;
void fun()
{
	int n,k;	cin>>n>>k;
	map<int,int> mp;
	int i=n;
	string s;
	while(i--)
	{
		cin>>s;
		mp[s.length()]++;
	}
	int x=i/k;
	int count=0;
	map<int,int> :: iterator it;
	for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second<k || it->second%k!=0)	
			{	cout<<"Not possible\n";
				return;
			}
			else 
			{
				count+=it->second/k;
			}
		}
	 x=count*k;

	if(x==n)
	{
			cout<<"Possible\n";	return;
	}
 	else {cout<<"Not possible\n";	return;	}
}
int main() {
	int t;
	cin>>t;
	while(t)
	{
		t--;	fun();
	}
}


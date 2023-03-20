/*
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-multiplication/
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fun(priority_queue<int,vector<int>,greater<int>> pq)
{
	ll s=1;
	while(!pq.empty())
	{
		s=s*pq.top();
		pq.pop();
	}
	cout<<s<<"\n";
}
int main() {
	int n;
	cin>>n;
	priority_queue<int,vector<int>,greater<int>> pq;
	int x;
	while(n--){
		cin>>x;
		pq.push(x);
		if(pq.size() <3){	printf("-1\n");	continue;}
		if(pq.size() >3){	pq.pop();	}
		fun(pq);
	}
}

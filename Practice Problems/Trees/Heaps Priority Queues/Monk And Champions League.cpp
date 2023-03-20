/*
hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-champions-league/
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {

	int n,m;
	cin>>n>>m;
	priority_queue<int> pq;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		pq.push(x);
	}
  //CBYGKS
	ll s=0,tmp=0;
	while(m--){
		tmp=pq.top();
		pq.pop();
		pq.push(tmp-1);
		s+=tmp;
	}
	cout<<s;
}

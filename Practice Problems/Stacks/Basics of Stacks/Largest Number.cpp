/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/largest-number-7-eee0b7c3/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	string N;
	ll K;
	cin>>N;
	cin>>K;
	
	ll D = N.size();
	
	stack<char> st,ts;
	for(ll i=0;i<D ;i++)
	{
		while( !st.empty() and (K>0 and (st.top()<N[i] )))
		{
			st.pop();
			K--;
		}
		st.push(N[i]);
	}
	while(K>0)
	{
		st.pop();
		K--;
	}
	while(!st.empty())
	{
		ts.push(st.top());
		st.pop();
	}
	while(!ts.empty())
	{
		cout<<ts.top();	ts.pop();
	}
	/*
*/
}

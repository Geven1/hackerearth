/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/maximum-subarray-sum-of-subarrays-7f33aefa/

Problem
Given an array 
 of 
 integers. Now, you have to output the sum of unique values of the maximum subarray sum of all the possible subarrays of the given array 
.
Note: Subarray means contiguous elements with atleast one element in it.

Input Format

The first line of the input contains a single integer 
, the total number of elements in array 
.
The next line of the input contains 
 space-separated integers representing the elements of the array.

Output Format

The only single line of the output should contain a single integral value representing the answer to the problem.

Constraints


Sample Input
4
5 -2 7 -3
Sample Output
17

*/

#include <iostream>
#include<map>
#include<algorithm>
using namespace std;
long long max(long long a,long long b)
{
	if(a>b)	return a;
	else return b;
}
int main() {
	int n;
	cin>>n;
  //BGKS
	long long a[n];
	map<int,int>mp;
	map<int,int> :: iterator it;

	for(int i=0;i<n;i++)
	{	cin>>a[i];	}
	for(int i=0;i<n;i++)
	{
		long long mx=a[i],sm=a[i];
		mp[mx]++;
		for(int j=i+1;j<n;j++)
		{
			sm=max(sm+a[j],a[j]);
			mx=max(sm,mx);
			mp[mx]++;
			
		}
	}
	long long res=0;
	for(it=mp.begin();it!=mp.end();it++)
	{
		res+=it->first;
	}
	cout<<res<<endl;
}

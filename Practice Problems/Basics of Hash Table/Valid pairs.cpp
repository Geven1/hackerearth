#include<bits/stdc++.h>
using namespace std;
/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/valid-pairs-66b5e894/

A famous Italian restaurant allows guests to enter only if they are present in pairs and the sum of the wealth of the people of the pair is a power of 3. A group of people wants to eat at the restaurant. Mathematically, if there are two people of wealth a and b, it forms a valid pair if 
a+b=3^k. for some positive integer k. They want to know how many possible pairs would be allowed entry.   

Task
Given the individual wealth of the people, find the number of valid pairs.

Notes
One person can be in multiple valid pairs.
A pair of person X and Y is the same as a pair of person Y and X.
*/

int main()
{
	int n,count=0;
	cin>>n;
	map<long long,int> mp;
	long long  a[n],po3[]={3,9,27,81,243,729,2187,6561,19683,59049,177147,531441,1594323,4782969,14348907,43046721,129140163,387420489,1162261467,3486784401,10460353203};
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=20;j++)
		{
			if(po3[j]>a[i])
			{
				int tmp = mp[po3[j]-a[i]];
				if(tmp)
				{
					
					count+=tmp;
				}
			}
		}
		mp[a[i]]++;
	}
	cout<<count;
}

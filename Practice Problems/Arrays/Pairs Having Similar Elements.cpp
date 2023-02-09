/*
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/pairs-having-similar-element-eed098aa/

Sample Input
8
1 3 5 7 8 2 5 7
Sample Output
6

at First I sort the array then 
1 2 3 5 5 7 7 8

then make another vector of pair with element in array and their frequency
1 1
2 1
3 1
5 2
7 2
8 1

then I take sum of the frequency of the elements which have a difference of 1.
then apply nCr ro nC2 for total combinations of 2 element taken;

the print the result
*/




#include <iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int main() {
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	vector<pair<int,int>> v;
	v.push_back({a[0],1});
	int i=1,j=0;
	for(;i<n;i++)
	{
		if(a[i]==v[j].first)
		{
			v[j].second++;
		}
		else
		{
			v.push_back({a[i],1});
			j++;
		}
	}
	int x=0;
	unsigned long long s=0,res=0;
	for(;x<=j;x++)
	{
		
		if(x+1<=j and (v[x+1].first - v[x].first ==1))
		{
			s+=v[x].second;
		}
		else if(x-1>=0 and v[x].first -v[x-1].first == 1)
		{
			s+=v[x].second;
			res+=s*(s-1)/2;
			s=0;
		}
		else if(s)
		{
			res+=s*(s-1)/2;
			s=0;
		}
	}
	cout<<res<<endl;
}

/*
hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/mathison-and-the-divisible-trio-a0a169b0/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int nc2(int n)
{
	return 1LL * n * (n - 1) / 2;
}
int nc3(int n){
	return 1LL * n * (n - 1) * (n - 2) / 6;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;	cin>>n>>m;
	int cnt[m]={0},x,i,j,k;
	for(ll i=0;i<n;i++)
	{	cin>>x;	
		cnt[x%m]++;	
	}
	ll res=0;
	for(i=0;i<m;i++)
	{
		if(cnt[i]>0)
		{
			for(j=i;j<m;j++)
			{
				if(cnt[j]>0) 
				{
					int sm = (i+j)%m;
					k = (m-sm+m)%m;
					if (i <= j && j <= k)
					{
						if (i == j && j == k)
			            {
							res += nc3(cnt[i]);
						}
						else if (i == j)
			            {
							res += nc2(cnt[i]) * cnt[k];
						}
						else if (j == k)
					    {	
							res += nc2(cnt[j]) * cnt[i];
						}
						else
						{
							res += 1LL * cnt[i] * cnt[j] * cnt[k];
						}	
					}
				}
			}
		}
	}
	cout<<res;

}

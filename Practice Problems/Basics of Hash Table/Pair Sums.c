/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/
*/
#include<stdio.h>
#include<stdlib.h>
typedef long long ll;

int cmp(const void *a,const void *b){	return *(int *)a-*(int *)b;}
int main(){
	ll n,k;
	scanf("%lli %lli",&n,&k);
	ll a[n];
	for(int i=0;i<n;i++)
	{	
		scanf("%lli",&a[i]);
	}
	qsort(a,n,sizeof(a[0]),cmp);
	ll  i=0,j=n-1;
	ll s=0;
	int flag=0;
	while(i<j)
	{
		s=a[i]+a[j];
		if(s>k)	j--;
		else if(s<k)	i++;
		else 
		{
			flag=1;
			
			break;
		}
	}
	if(flag) printf("YES");
	else printf("NO");
	return 0;
}

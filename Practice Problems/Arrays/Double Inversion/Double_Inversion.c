/*
 		
		https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/double-inversions-2-881a7d34/	

	INPUT
	2
	4
	0 0 2 3
	0 0 0 1
	3
	0 2 1
	2 1 0

	OUTPUT
	3 4 2 1
	-1

	
*/
#include <stdio.h>

void fun()
{
	long long  n;
	scanf("%lld",&n);
	long long  a[2][n];
	long long  b[n];
	int c[n];
	for(int i=0;i<n;i++)	c[i]=0;
	for(long long i=0;i<n;i++)
	scanf("%lld",&a[0][i]);
	for(long long i=n-1;i>=0;i--)
	scanf("%lld",&a[1][i]);
	
	for(long long i=0;i<n;i++)
	{
		b[i]=n-a[0][i]-a[1][i];
		
		if(b[i] <= 0)
		{
			printf("-1");
			return;
		}
		if(c[b[i]-1]==0)	c[b[i]-1]--;
		else if (c[b[i]-1]<0)	
		{
			printf("-1");
			return;
		}
	}
	for(long long i=0;i<n;i++)
	{
		printf("%lld ",b[i]);
	}
}
int main(){
	long long t;
	scanf("%lld", &t);
	while(t)
	{	
		t--;
		fun();
		printf("\n");
	}
	return 0;	
}


/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/staque-1-e790a29f/

Stack and Queue <Nissan>


Problem
You are given a stack of N integers such that the first element represents the top of the stack and the last element represents the bottom of the stack. You need to pop at least one element from the stack. At any one moment, you can convert stack into a queue. The bottom of the stack represents the front of the queue. You cannot convert the queue back into a stack. Your task is to remove exactly K elements such that the sum of the K removed elements is maximised.

Input format :     

The first line consists of two space-separated integers N and K.
The second line consists of N space-separated integers denoting the elements of the stack.
Output format :

Print the maximum possible sum of the K removed elements
Constraints :

Sample Input
10 5
10 9 1 2 3 4 5 6 7 8
Sample Output
40
*/


#include <stdio.h>
long long m(long long a,long long b)
{
	if(a>b)	return a;
	else return b;
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);

	long long int a[n];
	for(int i=0;i<n;i++)	scanf("%lld",&a[i]);
	long long int sum=0;
	for(int i=0;i<k;i++)
	sum+=a[i];
	long long int max=sum;
	
	for(int i=k-1;i>=1;i--)
	{
		sum-=a[i];
		sum+=a[n-1 - (k-1-i)];
		max=m(sum,max);
	}
	printf("%lld",max);
}

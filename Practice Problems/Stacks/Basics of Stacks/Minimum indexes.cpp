/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/yassers-conditions-6cc26a09/
*/
#include<iostream>
using namespace std;
#define ll long long
int sod(ll n)
{
	int s=0;
	while(n!=0)
	{
		s+=n%10;
		n=n/10;
	}
	return s;
}

int fun(int A[],int n,int x)
{
	int m=-1;
	for(int i=x+1;i<n;i++)
	{
		if(A[x]>A[i])
		{
			m=i;
			break;
		}
	}
	if(m==-1)
	return m;
	else
	return m+1;

}
int main()
{
	int n,q;
	cin>>n>>q;
	int numbers[n],sum_of_digits[n];
	for(int i=0;i<n;i++)
	{
		cin>>numbers[i];
		sum_of_digits[i]=sod(numbers[i]);
	}
	while(q!=0)
	{
		q--;
		int ans=-1;
		int x;
		cin>>x;
		x--;
		for(int i=x+1;i<n;i++)
		{
			if(sum_of_digits[i]<sum_of_digits[x] and numbers[i]>numbers[x])
			{
				ans=i+1;
				break;
			}
		}
		cout<<ans<<"\n";
		//cout<<fun(A,n,x-1)<<endl;
	}
	return 0;
}

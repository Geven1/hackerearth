/*
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/2-arrays-90c9019c/

Sample Input
4
1 2 -1 4
3 3 3 1
Sample Output
1

*/


#include <stdio.h>

int pos(int s)
{
	if(s>0)	return s;
	else return (-1)*s;
}
int main(){
	int n;
	scanf("%d", &n);
	int x=0,y=0;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	scanf("%d",&b[i]);
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(x==1 && y==1)
		{
			printf("Infinite");
			return 0;
		}
		if(a[i] == -1)
		{
			x++;
		}
		else
		{
			s-=a[i];
		}
		if(b[i] == -1)
		{
			y++;
		}
		else
			s+=b[i];
	}
	if(x==1 && y==1)
	{
		printf("Infinite");
		return 0;
	}
	if((s<0 && x>0) || (s>0 && y>0))
	{
		printf("0");
		return 0;
	}
	s=pos(s);
	if(x==2 || y==2)
	{
		printf("%d",s+1);
		return 0;
	}
	else
	printf("%d",1);
	return 0;
}

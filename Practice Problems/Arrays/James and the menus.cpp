/*
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/howie-and-the-menus-2-48359fe4/

Sample Input
3 4
1 2 1 10
3 2 3 4
1 3 3 2
Sample Output
2


*/

// Write your code here
#include <stdio.h>
struct point
{
	unsigned int key;
	float pair;
};


int main(){
	int nm,ni;
	int max=0;
	int x=0,t=0;
	scanf("%d %d", &nm,&ni);
	int a[nm][ni];
	struct point map[nm];
	for(int i=0;i<nm;i++)
	{
		map[i].key=0;
		map[i].pair=0;
	}
	
	for(int i=0;i<nm;i++)
	{
		for(int j=0;j<ni;j++)
		{
			scanf("%d",&a[i][j]);	
		}
	}
	
	for(int i=0;i<ni;i++)
	{
		x=0;
		max=0;
		for(int j=0;j<nm;j++)
		{
			if(a[j][i]>max) 
			{
				max=a[j][i];
			}
		}
		for(int j=0;j<nm;j++)
		{
			if(a[j][i]==max)
			{
				map[j].key++;
			}
		}
		
	}
	max=0;
	x=0;
	
	for(int i=0;i<nm;i++)
	{
		if(max<map[i].key)
		{
			max=map[i].key;
		}
	}

	for(int i=0;i<nm;i++)
	{
		if(map[i].key==max)
		{	
			for(int j=0;j<ni;j++)
			{
				map[i].pair+= a[i][j]/ni;
			}	
		}
	}
	int maxpair=0;
	int index=0;

	for(int i=0;i<nm;i++)
	{
		if(map[i].key==max && maxpair<map[i].pair )
		{
			index =i;
		}
	}
	printf("%d",index+1);
	return 0;
}




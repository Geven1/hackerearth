#include <stdio.h>

void fun()
{
	int n;
	scanf("%d",&n);
	int a[n][n],i,j,k,l;
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)	
		{
		scanf("%d",&a[i][j]);
		}
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)	
		{
			for(k=i;k<n;k++)
			{
				for(l=j;l<n;l++)
				{
					if(a[i][j]>a[k][l])
					count++;
				}
			}
		}
	}
	printf("%d\n",count);
}

int main(){
	int num;
	scanf("%d", &num);              	                  // 
	while(num--)
	{
		fun();
	}
}

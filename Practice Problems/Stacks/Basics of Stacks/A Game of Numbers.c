/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3/
*/

#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#define ll long long int

int main()

   {    //    3 7 1 7 8 4 5 2
   int n;
   scanf("%d",&n);
   ll a[n];
   for(int i=0;i<n;i++)
   {
      scanf("%lld",&a[i]);
   }
   ll f[n],g[n];
   for(int i=0;i<n;i++)   {      f[i]=-1;    g[i]=-1;   }
   for(int i=0;i<n;i++)
      {
         for(int j=i+1;j<n;j++)
         if(a[i]<a[j])
         {
            f[i]=j;
            break;
         }
      }
   for(int i=0;i<n;i++)
      {
         for(int j=i+1;j<n;j++)
         if(a[i]>a[j])
         {
            g[i]=j;
            break;
         }
      }
   /*
   for(int i=0;i<n;i++) printf("%lld  ",a[i]); printf("\n");
   for(int i=0;i<n;i++) printf("%lld  ",f[i]); printf("\n");
   for(int i=0;i<n;i++) printf("%lld  ",g[i]); printf("\n");
   */
   for(int i=0;i<n;i++)
      {
         if(f[i]==-1 || g[f[i]]==-1)
         printf("-1 ");
         else
         printf("%lld ",a[g[f[i]]]);
      }
}

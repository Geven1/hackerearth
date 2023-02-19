/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/fun-game-91510e9f/
*/

#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>


int main() {
   int n;
   scanf("%d",&n);
   long long int a[n];
   for(int i=0;i<n;i++)
   scanf("%lld",&a[i]);
   int i=0,j=n-1;
   while((i<n) &&( j>=0 ))
   {
      if(a[i]>a[j])
      {
         printf("1 ");
         j--;
      }
      else if(a[i]<a[j])
      {
         printf("2 ");
         i++;
      }
      else
      {
         printf("0 ");
         i++;  j--;
      }
   }

}

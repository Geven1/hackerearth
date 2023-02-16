/*
https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/all-vowels-2/

Problem
Vowels are very essential characters to form any meaningful word in English dictionary. There are 5 vowels in English language - a, e, i, o u. You are given a randoms string containing only lowercase letters and you need to find if the string contains ALL the vowels.

Input:

FIrst line contains N , the size of the string.
Second line contains the letters (only lowercase).

Output:

Print "YES" (without the quotes) if all vowels are found in the string, "NO" (without the quotes) otherwise.

Constraints:

The size of the string will not be greater than 10,000
1 ≤ N ≤ 10000

Sample Input
8
atuongih
Sample Output
NO
Time Limit: 2
Memory Limit: 256
*/

#include <stdio.h>
void main(){
	
	int n;
	scanf("%d",&n);
	int a[5]={};
	for(int i=0;i<n;i++)
	{
		char x;
		scanf("%c",&x);
		if(x=='a')	a[0]=1;
		else if(x=='e') a[1]=1;
		else if(x=='i') a[2]=1;
		else if(x=='o') a[3]=1;
		else if(x=='u') a[4]=1;
	}
	for(int i=0;i<5;i++)
	{
		if(a[i]!=1){	printf("NO\n");	return;	}
	}
	printf("YES");
	
}

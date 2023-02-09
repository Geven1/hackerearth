/*
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/tram-ride-d7ff3a92/

Sample Input
4
1
3
1 2 3 4
Sample Output
3


*/

#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}
int min(int a,int b)
{
    if(a<b) return a;
    else return b;
}
long long solve (int n, int start, int finish, int* a) {
    
    int ma=min(start,finish);
    int mb=max(start,finish);
    long long sa=0,sb=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {   
        if(i==ma-1)
        flag=1;
        if(i+1==mb)
        flag = 0;
        
        if(flag){   sa = sa+a[i];   }
        else sb+=a[i];
    }
    if(sa<sb)
    return sa;
    else 
        return sb;
}

int main() {
    int N;
    scanf("%d", &N);
    int start;
    scanf("%d", &start);
    int finish;
    scanf("%d", &finish);
    int i_Ticket_cost;
    int *Ticket_cost = (int *)malloc(sizeof(int)*(N));
    for(i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    	scanf("%d", &Ticket_cost[i_Ticket_cost]);

    long long out_ = solve(N, start, finish, Ticket_cost);
    printf("%lld", out_);
}

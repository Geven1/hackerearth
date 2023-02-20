/*
hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/circular-list-8e1319c9/

Problem
You are given an array A of n integers. You have to make a queue and stack of the given integers. Queue should contain only prime numbers and stack should contain only composite numbers. All numbers in the array will be 
.
The rule to form the stack and queue is that you should be able to generate the array using the pop and dequeue operations.
Note : Please read this explanation carefully

Let the array A contains 5 integers : 7 , 21 , 18 , 3 , 12 then the content of queue and stack will be :
Queue : 7 , 3
Stack : 12 , 18 , 21
Now if you follow the rules of stack and queue then you see that you can generate the array using the pop operations of stack and dequeue operation of queue as follows :

dequeue from queue : 7
pop from stack : 7 , 21
pop from stack : 7 , 21 , 18
dequeue from queue : 7 , 21 , 18 , 3
pop from stack : 7 , 21 , 18 , 3 , 12

Thus for every array A you have to print the contents of queue in the first line and contents of stack in the second line.

Input Format
First line contains an integer n as input denoting total numbers of integers in the array.
Next line contains n space separated integers denoting the elements of array A.
Your output should print two arrays , one in each line. First line should be the contents of queue and second line should be the contents of stack.

Output Format
In the first line print the contents of queue and in second line print the contents of the stack.

Input Constraints



Sample Input
5
7 21 18 3 12
Sample Output
7 3 
12 18 21 
*/

#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

bool isprime(int n)
{
    if(n>=1 && n<=3)   return true;
    if(n%2==0 || n%3==0)    return false;

    for(int i=5;i*i<=n;i+=6)
    {
        if((n%i==0) || (n%(i+2)==0))
        {
            return false;
        }
    }
    return true;
}
struct list
{
    int data;
    struct list *link;
};
void main()
{
    int n;
    scanf("%d",&n);
    int i=n;
    int a[n];
    while(i--){scanf("%d",&a[n-1-i]);//CBGKS
              }

    struct list *x=(struct list *)0;
    for(i=0;i<n;i++)
    {
        if(isprime(a[i]))
        {
            printf("%d ",a[i]);
        }
        else
        {
            struct list *tmp=(int *)malloc(sizeof(struct list));
            tmp->data = a[i];
            tmp->link = x;
            x=tmp;
        }
    }
    printf("\n");
    struct list *p1=x;
    while(p1!=NULL)
    {
        printf("%d ",p1->data);
        p1=p1->link;
    }

}

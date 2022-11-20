/*
Problem
You are given two arrays each of size n, a and b consisting of the first n positive integers each exactly once, that is, they are permutations. 

Your task is to find the minimum time required to make both the arrays empty. The following two types of operations can be performed any number of times each taking 1 second:

In the first operation, you are allowed to rotate the first array clockwise.
In the second operation, when the first element of both the arrays is the same, they are removed from both the arrays and the process continues.
Input format

The first line contains an integer n, denoting the size of the array.
The second line contains the elements of array a.
The third line contains the elements of array b.


Output format

Print the total time taken required to empty both the array.

Constraints
1<=n<=100

Sample Input
3
1 3 2
2 3 1
Sample Output
6
Time Limit: 1
Memory Limit: 256
Source Limit:
Explanation
Perform operation 1 to make a = 3, 2, 1

Perform operation 1 to make a = 2, 1, 3

Now perform operation 2 to make a = 1, 3 and b = 3, 1

Perform operation 1 to make a = 3, 1

Now perform operation 2 to make a = 1 and b =  1

Now perform operation 2 to make a = {} and b =  {}

*/
#include<iostream>
#include<queue>
using namespace std;

int count(queue<int> a,int x,int n)
{
    int s=0;
    while(a.front() != x and    s<=n )
    {
        a.pop();
        s++;
    }
    return s;
}
int fun(queue<int> &a,queue<int> &b,int n)
{
    int s=count(a,b.front(),n);
    int c=s;
    while(s)
    {
        s--;
        int x=a.front();
        a.pop();
        a.push(x);
    }
    a.pop();
    b.pop();
    c++;
    return c;
}

int main()
{
    int n;  cin>>n;
    queue<int> a,b;
    int x=n;
    while(x)
    {   int tmp;   cin>>tmp;    a.push(tmp);      x--;    }
    x=n;
    while(x)
    {   int tmp;   cin>>tmp;    b.push(tmp);      x--;    }
    x=n;
    int i=0;
    int s=0;
    while(i<n)
    {
        s=s+fun(a,b,n);
        i++;
    }
    cout<<s;
}
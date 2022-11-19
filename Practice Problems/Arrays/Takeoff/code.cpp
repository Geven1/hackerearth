#include<iostream>
#include<set>
using namespace std;


int sumofArr(int A[],int n)
{    n=n+1;  int s=0;        while(n){   n--;    s=max(s,s+A[n]);  }  return s;       }
int fun()
{
    int n,p,q,r;
    cin>>n>>p>>q>>r;
    int A[n+1];
    int x=n+1;  while(x){   x--;    A[x] = -1;}

    int t=1;
    while(p*t<=n || q*t<=n || r*t<=n) 
    {
        if(p*t<=n)   
            {
                if( A[p*t] == -1 )    A[p*t] = 1;
                else  if(   A[p*t] == 1)          A[p*t] = 0;
            }
        if(q*t<=n)   
            {
                if( A[q*t] == -1 )    A[q*t] = 1;
                else  if(   A[q*t] == 1)          A[q*t] = 0;
            }
        if(r*t<=n)   
            {
                if( A[r*t] == -1 )    A[r*t] = 1;
                else  if(   A[r*t] == 1)          A[r*t] = 0;
            }
        t++;
    }
    return sumofArr(A,n);
}
int main()
{
        int t;  
        cin>>t;
    while(t)
    {
        t--;        cout<<fun()<<endl;
    }
}
/*
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/zulu-encounters-a-sequence-problem/
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
#define ll long long
void fun()
{
    ll n;cin>>n;
    ll a[n];   for(ll i=0;i<n;i++)    cin>>a[i];
    ll tmp=a[0];
    bool flag=1;
    ll i=0;
    ll mx=0;
    while(i<(n-1))
    {
        
        if(a[i]<a[i+1]) 
        {
            if(flag==1)
            {
                mx=max(mx,abs(a[i+1]-tmp));
            }
            else
            {
                flag=1;
                tmp=a[i];
                i--;
            }
        }
        else if(a[i]>a[i+1])
        {
            if(flag==0)
            {
                mx=max(mx,abs(tmp-a[i+1]));
            }
            else
            {
                flag=0;     tmp=a[i];i--;
            }
        }
        i++;
    }
    cout<<mx<<"\n";
}

int main()
{
    ll t;  cin>>t;
    while(t--)
    {
       fun();
    }
}

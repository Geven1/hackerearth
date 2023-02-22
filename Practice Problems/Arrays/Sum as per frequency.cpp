/*
https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/sum-as-per-frequency-88b00c1f/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum[1000001], freq[1000001];    

int main() 
    {
    // Below 3 loc are most Important to Include to bypass TLE
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL); 
    ll n,i,j,ans,l,r,q;
    cin>>n;
    ll a[n];
    //BYGKS
    for(i=0; i<=1000000; i++) 
    {
        sum[i]=0; freq[i]=0; 
    } 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        sum[freq[a[i]]]+=a[i];
    }
    for(i=2;i<=1000000;i++)
    {
        sum[i]=sum[i]+sum[i-1];
    }
    
    cin>>q;
    while(q--)

    {        
        cin>>l>>r;
        ans=sum[r];
        if(l>0)
        ans=ans-sum[l-1];
        //Don't Use endl as it's giving TLE instead use "\n"
        cout<<ans<<"\n";
    }
}

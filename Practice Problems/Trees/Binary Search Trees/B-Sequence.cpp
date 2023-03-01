/*
https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/b-sequence-f919fc86/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    set<int> left;
    set<int,greater<int>> right;
    int n;
    cin>>n;
    ll mx=-1,x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(mx<x)
        left.insert(x);
        else
        right.insert(x);
        mx=max(x,mx);
    }
    set<int> ::iterator it;
    int q;cin>>q;
    while(q--)
    {
        cin>>x;
        if(x==mx)
        {
            cout<<left.size()+right.size()<<"\n";
            continue;
        }
        else if(x>mx)
        {
            left.insert(x);
            mx=x;
            //CBGKS
        }
        else if(left.count(x))
        {
            right.insert(x);
        }
        else 
        {
            left.insert(x);
        }
        cout<<left.size()+right.size()<<"\n";
    }
    
    //set<int> ::iterator it;
    for(it=left.begin();it!=left.end();it++)
    {
        cout<<*it<<" ";
    }
    for(it=right.begin();it!=right.end();it++)
    {
        cout<<*it<<" ";
    }


}

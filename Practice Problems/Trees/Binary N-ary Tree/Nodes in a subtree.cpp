/*
 https://www.hackerearth.com/problem/algorithm/magical-tree-1-e7f8cabd/
 https://www.hackerearth.com/practice/data-structures/trees/binary-and-nary-trees/practice-problems/algorithm/magical-tree-1-e7f8cabd/
  */

#include<bits/stdc++.h>
using namespace std;

void dfs(int a , int  b, string &s, vector<vector<int>> &adj,vector<vector<int>> &freq)
{
    freq[a][s[a-1] - 'a'] ++;
    vector<int> :: iterator it;
    for(it=adj[a].begin(); it!= adj[a].end() ;it++)
    {
        if(*it == b) continue;
        dfs(*it , a ,s,adj,freq);
        for(int i=0;i<26;i++)
        freq[a][i]+=freq[*it] [i];
    }

}
int main()
{
    int n,q;    string s;
    cin>>n>>q>>s;
    vector<vector<int>> adj(n+1);
    vector<vector<int>> freq(n+1,vector<int> (26,0));
    for(int i=1;i<n;i++)
    {
        int x,y;    cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    //BGYKS
    dfs(1,0,s,adj,freq);
    
    while(q--)
    {
        char a; int x;
        cin>>x>>a;
        cout<<freq[x][a-'a']<<"\n";
    }
    return 0;
}

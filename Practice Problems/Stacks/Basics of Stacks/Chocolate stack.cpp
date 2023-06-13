/*
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/chocolate-stack-746c1b56/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solution (int n, vector<int> c) {
   stack<int> st;
   st.push(c[0]);
   for(int i=1;i<n;i++)
   {
        if(c[i]==0)
        {
            cout<<st.top()<<" ";
            st.pop();
            continue;
        }
        st.push(c[i]);
   }
 //CBGKS
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> C(N);
    for(int i_C = 0; i_C < N; i_C++)
    {
    	cin >> C[i_C];
    }

    solution(N, C);
    
}

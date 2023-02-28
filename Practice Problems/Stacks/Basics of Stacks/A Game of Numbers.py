"""
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/a-game-of-numbers-1-5d3a8cb3/
"""

n=int(input())
a=[]
for i in range(n):
    x=int(input())
    a.append(x)
st=[]
f=[-1 for i in range(n)]
g=[-1 for i in range(n)]
for i in range(n-1,-1,-1):
    while(st and a[st[-1]]<=a[i]):
        st.pop()
    if  st : f[i]=st[-1]
    st.append(i)
st=[]
#CBGKS
for i in range(n-1,-1,-1):
    while(st and a[st[-1]]>=a[i]):
        st.pop()
    if  st:g[i]=st[-1]
    st.append(i)

l=[-1 for i in range(n)]
for i in range(0,n):
    if(f[i]!=-1 and g[f[i]]!=-1):
         l[i] =a[g[f[i]]]
for i in l:
    print(i,end=" ")

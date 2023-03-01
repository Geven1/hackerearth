#https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/b-sequence-f919fc86/

n=int(input())
a=[int(x) for x in input().split()]
mx=-1
l,r=set(),set()
for x in a:
    if x>mx:
        l.add(x)
    else:
        r.add(x)
    mx=max(mx,x);
q=int(input())
while(q):
    q-=1
    x=int(input())
    if x==mx:
        print(len(l)+len(r))
        continue
    elif x>mx:
        l.add(x)
        mx=x
    elif x in l:
        r.add(x)
    else:
        l.add(x)
    print(len(l)+len(r))
l=list(l)
l.sort()
r=list(r)
r.sort(reverse=True)
for i in l:
    print(i,end=" ")
for i in r:
    print(i,end=" ")




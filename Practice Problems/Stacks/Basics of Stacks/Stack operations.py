"""
https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/stakth-1-e6a76632/

"""
n,k=map(int,input().split())
a=[int(x) for x in input().split()]
if (n==1 and k%2==1):
    print(-1)
elif k>n:
    print(max(a))
else:
    t=max(a[0:k-1])
    print(max(t,a[k]))

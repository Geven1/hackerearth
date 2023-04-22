s,n = input().split()
n=int(n)
arr=[]
for i in range(len(s)):
    arr.append(s[i:])
arr.sort()
print(arr[n-1])

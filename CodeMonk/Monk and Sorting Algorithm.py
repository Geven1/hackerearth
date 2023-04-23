n=int(input())
arr=list(map(int,input().split()))
max_m = max(arr)
div=10**5
mul=1
while(max_m):
    arr.sort(key=lambda x:(x/mul)%div)
    print(" ".join(map(str,arr)))
    mul*=div
    max_m//=div

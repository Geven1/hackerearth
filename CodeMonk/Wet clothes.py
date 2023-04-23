n,m,g = map(int, input().split())
time = list(map(int, input().split()))
cloth = list(map(int, input().split()))
arr=[]
for i in range(len(time)-1):
    arr.append(time[i+1]-time[i])
maxm = max(arr)
count=0
for i in cloth:
    if i<maxm or i==maxm:
        count = count + 1
print(count)

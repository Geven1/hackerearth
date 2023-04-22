test_=int(input())
while(test_):
    test_-=1
    n=int(input())
    dic={}
    a=[]
    a = list(map(int,input().split()))
    for i in a:
        if(i in dic):
            dic[i]+=1
        else:
            dic[i]=1
    if len(dic)==1:
        print('-1')
        continue
    mx,mn=max(dic.values()),min(dic.values())
    print(mx-mn)

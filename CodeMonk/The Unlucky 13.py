mod = 10**9+9
mp={}
mp[0]=1
mp[1]=10
mp[2]=99
mp[3]=980
def fun(n):
    if(n<50000000):
        if(n in mp):
            return mp[n]
        x=n//2
        y=n//2-1
        tmp1 = fun(x)%mod
        tmp2 = fun(y)%mod
        if(n%2==0):
            mp[n] = ((tmp1*tmp1)%mod -(tmp2*tmp2))%mod
        else:
            tmp3=fun(n//2+1)%mod
            mp[n] = (tmp1*(tmp3-tmp2))%mod
        return mp[n]
    else:
        if(n in mp2):
            return mp2[n]
        x=n//2
        y=n//2-1
        tmp1 = fun(x)%mod
        tmp2 = fun(y)%mod
        if(n%2==0):
            mp2[n] = ((tmp1*tmp1) -(tmp2*tmp2))%mod
        else:
            tmp3=fun(n//2+1)%mod
            mp2[n] = (tmp1*(tmp3-tmp2))%mod
        return mp2[n]
tear=int(input())
while(tear):
    tear-=1
    mp2={}
    n=int(input())
    print(fun(n))
    

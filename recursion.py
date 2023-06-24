def recursion(i,sa,a,n):
    if(i==n):
        print(*sa)
        return
    sa.append(a[i])
    recursion(i+1,sa,a,n)
    sa.pop()
    recursion(i+1,sa,a,n)
i=list(map(lambda x:int(x),input().split()))
recursion(0,[],i,len(i))

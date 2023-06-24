n,m=map(int,input().split())
l1=[]
for i in range(n):
    l=list(map(int,input().split()))
    l1.extend(l)
k=int(input())
l1.sort()
if(k>len(l1)):
    print("cannot find")
else:
 print(l1[k-1])


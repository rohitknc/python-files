l1=list(map(int,input().split()))
n=int(input())
l=[0]*n
def knc(l1,n):
  for i in l1:
     l[i%n]+=1
  if(l[0]%2!=0):
    return False
  else:
    for i in range(1,n):
        if(l[i]!=l[n-i]):
           return False
  return True
print(knc(l1,n))
    

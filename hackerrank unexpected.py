t,k=map(int,input().split())
d={}
for i in range(t):
    s1=input()
    if '^' in s1:
        d[i+1]=[j+1 for j in range(len(s1)) if s1[j]=='^']
l=[]
for i in d:
    l.extend(d[i])
for i in l:
    if(l.count(i)==1):
        h=i
        break
for i in d:
    if(len(d[i])==1):
        a=i
print(a,h)
        
    

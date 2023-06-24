t=int(input())
a=[]
for i in range(t):
    k=int(input())
    h=input()
    if(k>2):
        h=list(h)
        h.sort()
        h="".join(h)
        a.append(h)
    else:
        a.append(h)
for k in a:
    print(k)
    

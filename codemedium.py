'''print a array elements as right angle like
input:3
1 2 3
4 5 6
7 8 9
output:
1
4 2   
7 5 3
8 6
9'''

n=int(input())
l=[]
for i in range(n):
    l1=list(map(int,input().split()))
    l.append(l1)
    
#1st approach
    
'''f=0
s=0
while(1):
    if(f==0 and s==0):                        
        print(l[f][s],end='')
        f+=1
        print()
    else:
        if(f<n-1):
            s=0
            a=f
            for i in range(f+1):
                print(l[a][s],end=' ')
                s+=1
                a-=1
            print()
            f+=1
        else:
            a=-1
            k=n-1
            for i in range(k+1):
                a+=1
                q=a
                g=n-1
                for j in range(k+1-i):
                    print(l[g][q],end=' ')
                    g-=1
                    q+=1
                print()
            break
'''

#2nd approach

'''u=-1
while(1):
 u+=1
 a=[]
 for i in range(n):
    for k in range(n):
        if(i+k==u):
            a.append(l[i][k])
 a.reverse()
 print(*a)
 if(u==n*2-1):
     break
'''
     
            
            

                
    
                
                
        

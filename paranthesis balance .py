op=['[','(','{']
cp=[')',']','}']
n=input()
s=[]
for i in n:
  if i in op:
    s.append(i)
  elif i in cp:
    k=s[-1]
    if (i=="}" and k=="{") or (i==")" and k=="(") or (i=="]" and k=="["):
      s.pop()   
if len(s)==0:
  print(1)
else:
 print (0)
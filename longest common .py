#!/usr/bin/python3
str1=input()
def count(s):
  if str1.count(s)>1:
    return s
  return 0
l=""
for i in range(0,len(str1)):
   for j in range(i,len(str1)):
      x=count(str1[i:j+1])
      if(x==0):
       continue
      else:
        if(len(l)<len(x)):
           l=x
        
print(l)       

def knc(s1,s2):
    if(len(s1)!=len(s2)):
        return False
    l=[]
    i=0
    k=0
    for j in range(len(s1)):
        if(s1[j]!=s2[j]):
            l.append(j)
    if(len(l)>2):
        return False
    if(s1[l[0]]==s2[l[1]] and s1[l[1]]==s2[l[0]]):
        return True
    else:
        return False
s1=input()
s2=input()
print(knc(s1,s2))
'''
#gfg submitted answer
def metaStrings(self, s1, s2):
        if(len(s1)==2):
            if(s1[0]==s2[1] and s2[0]==s1[1]):
                return True
        if(len(s1)!=len(s2) or len(s1)<3 or s1==s2):
          return False
        l=[]
        i=0
        k=0
        for j in range(len(s1)):
         if(s1[j]!=s2[j]):
            l.append(j)
        if(len(l)>2):
         return False
        if(s1[l[0]]==s2[l[1]] and s1[l[1]]==s2[l[0]]):
          return True
        else:
           return False
        # code here
'''

Str = 'spaghettigood'
# s        t      d
# p     e  t    o
# a   h    i  o
# g        g
Row = 4
l=[]
c=1
k=0
for i in range(len(Str)):
    if(c==1):
        l.append([Str[i]])
        k+=1
        if(k==Row):
            c+=1
            k-=2

    elif(c%2==0):
        l[k].append(Str[i])
        k-=1
        if (k==-1):
            c+=1
            k+=2
   
    else:
        l[k].append(Str[i])
        k+=1
        if (k==Row):
            c+=1
            k-=2

a=[]
for i in range(len(l)):
    a+=l[i]
s=''
print(s.join(a))

#stdpetoahiogg
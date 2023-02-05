a=[]
for j in range(3):
  a.append(list(input().split(',')))
for i in range(0,len(a)):
        h=a[i][1]
        m=a[i][1]
        s=a[i][1]
        h=int(h[0:2])
        m=int(m[3:5])
        s=int(s[6:8])
        time=(h*3600)+(m*60)+s
        a[i].append(time)
        
for i in range(0,len(a)-1):
    for j in range(0,len(a)-i-1):
        if(a[j][2]>a[j+1][2]):
            a[j],a[j+1]=a[j+1],a[j]
queue=[]
for i in range(0,3):
    queue.append(a[i][0])
print(queue)    
            
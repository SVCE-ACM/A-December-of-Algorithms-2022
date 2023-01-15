n=int(input())
a=[]
b=[]
for i in range(n):
    x=list(map(int,input().split()))
    a.append(x)


for i in range(0,n):
    c=[]
    for j in range(0,n):
        x=0
        c.append(x)
    b.append(c)    

i=0
j=0
b[i][j]=1
while(i in range(0,n) and j in range(0,n)):
    if(j+1<n and a[i][j+1]==1):
        b[i][j+1]=1
        j=j+1
    elif(i+1<n and a[i+1][j]==1):
        b[i+1][j]=1
        i=i+1 
    else:
        break
b[n-1][n-1]=1 
print(b)

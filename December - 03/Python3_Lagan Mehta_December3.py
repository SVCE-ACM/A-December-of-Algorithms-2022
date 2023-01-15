a=[]
print("Enter the size you want:")
n=int(input())
print("Enter the elements for it:")
for i in range(0,n):
    b=[]
    for j in range(0,n):
        x=input()
        b.append(x)
    a.append(b)
print("Before:")    
for i in range(0,n):
    for j in range(0,n):
        print(a[i][j],end=' ')
    print("\n")    
for i in range(0,n):
    for j in range(0,n):
        if(a[i][j]=='-'):
            a[i][j]='0'
for i in range(0,n):
    for j in range(0,n):
     if(a[i][j]=='#'):    
       for k in range(i-1,i+2):
           for l in range(j-1,j+2):
               if(k in range(0,n) and l in range(0,n)):
                   if(k==i and l==j):
                      continue
                   elif(a[k][l]!='#'):
                      x=int(a[k][l])+1
                      a[k][l]=str(x)
print("After:")                 
for i in range(0,n):
    for j in range(0,n):
       print(a[i][j],end=' ')
    print("\n")
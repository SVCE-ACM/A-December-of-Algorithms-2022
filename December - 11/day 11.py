a=list(input().split(','))
b=list(map(int,input().split(',')))
x=0
for i in range(0,len(b)):
    x+=b[i]
    if(a[x]=='~'):
        print("Score =",i)
        break
    
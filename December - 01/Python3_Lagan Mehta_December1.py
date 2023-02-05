n=int(input())
a=[]
for i in range(n):
    a=list(input().split(','))
    b=''
    for j in a:
        b+=j
    c=bytes.fromhex(b)
    d=c.decode()
    a.append(d)
for i in a:
    print(i)

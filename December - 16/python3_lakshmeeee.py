h = [int(x) for x in input().split(',')]
w=0
for i in range(len(h)):
    for j in range(i+1,len(h)):
        m=((j+1)-(i+1))*min(h[i],h[j])
        if(m>w):
            w=m

print(w)

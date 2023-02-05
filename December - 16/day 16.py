

import math
max_val=-math.inf
a=list(map(int,input().split(',')))
for i in range(0,len(a)):
    for j in range(i+1,len(a)):
        if(a[i]>a[j]):
            p=a[j]
        else:
            p=a[i]
        product=p*(j-i)
        if(max_val<product):
            max_val=product
print(max_val)            
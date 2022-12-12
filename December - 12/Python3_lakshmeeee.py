# n=4
# path = [ [9,4,9,9], [6,7,6,4], [8,3,3,7], [7,4,9,10] ]
n=int(input())
path=[]
for i in range(n):
    path.append([int(x) for x in input().split(',')])

'''
9  4  9  9
6  7  6  4
8  3  3  7
7  4  9  10
'''

i,j=0,0
cost=path[i][j]
# print(cost)

while(i!=n-1 and j!=n-1):
    if (i+1)!=n and (j+1)!=n:
        if path[i][j+1]<path[i+1][j]:
            j+=1
            cost+=path[i][j]
            # print('in',i,j+1,path[i][j+1])
        else:
            i+=1
            cost+=path[i][j]
    elif (i+1)==n and (j+1)!=n:
        j+=1
        cost+=path[i][j]
    else:
        i+=1
        cost+=path[i][j]
    # print(cost)

print(cost+path[n-1][n-1])

        

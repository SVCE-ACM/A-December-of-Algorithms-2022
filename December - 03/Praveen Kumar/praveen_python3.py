n = int(input())

array = []

for x in range(0, n):
    l = input()
    l = l.replace('-', '0').split(' ')
    l = l[:5]
    array.append(l)

for x in range(0, n):
    for x1 in range(0,n):
        if array[x][x1] == '#':
            if ((x==0) and (x1==0)):
                if array[x][x1+1] != '#':
                    array[x][x1+1] = int(array[x][x1+1]) + 1
                if array[x+1][x1+1] != '#':
                    array[x+1][x1+1] = int(array[x+1][x1+1]) + 1
                if array[x+1][x1] != '#':
                    array[x+1][x1] = int(array[x+1][x1]) + 1
            elif x1 == 0:
                if array[x-1][x1] != '#':
                    array[x-1][x1] = int(array[x-1][x1]) + 1
                if array[x-1][x1+1] != '#':
                    array[x-1][x1+1] = int(array[x-1][x1+1]) + 1
                if array[x][x+1] != '#':
                    array[x][x1+1] = int(array[x][x1+1]) + 1
                if array[x+1][x1+1] != '#':
                    array[x+1][x1+1] = int(array[x+1][x1+1]) + 1
                if array[x+1][x1] != '#':
                    array[x+1][x1] = int(array[x+1][x1]) + 1
            elif ((x == n-1) and (x1== 0)):
                if array[x-1][x1] != '#':
                    array[x-1][x1] = int(array[x-1][x1]) + 1
                if array[x-1][x1+1] != '#':
                    array[x-1][x1+1] = int(array[x-1][x1+1]) + 1
                if array[x][x+1] != '#':
                    array[x][x1+1] = int(array[x][x1+1]) + 1
            elif ((x == 0) and (x1== n-1)):
                if array[x+1][x1] != '#':
                    array[x+1][x1] = int(array[x+1][x1]) + 1
                if array[x+1][x1-1] != '#':
                    array[x+1][x1-1] = int(array[x+1][x1-1]) + 1
                if array[x][x1-1] != '#':
                    array[x][x1-1] = int(array[x][x1-1]) + 1
            elif ((x == n-1) and (x1== n-1)):
                if array[x-1][x1] != '#':
                    array[x-1][x1] = int(array[x-1][x1]) + 1
                if array[x-1][x1-1] != '#':
                    array[x-1][x1-1] = int(array[x-1][x1-1]) + 1
                if array[x][x1-1] != '#':
                    array[x][x1-1] = int(array[x][x1-1]) + 1
            elif ((x != 0) and (x1== n-1)):
                if array[x+1][x1] != '#':
                    array[x+1][x1] = int(array[x+1][x1]) + 1
                if array[x+1][x1-1] != '#':
                    array[x+1][x1-1] = int(array[x+1][x1-1]) + 1
                if array[x][x1-1] != '#':
                    array[x][x1-1] = int(array[x][x1-1]) + 1
                if array[x-1][x1] != '#':
                    array[x-1][x1] = int(array[x-1][x1]) + 1
                if array[x-1][x1-1] != '#':
                    array[x-1][x1-1] = int(array[x-1][x1-1]) + 1
            elif ((x ==0) and (x1 !=0)):
                if array[x][x1-1] != '#':
                    array[x][x1-1] = int(array[x][x1-1]) + 1
                if array[x+1][x1-1] != '#':
                    array[x+1][x1-1] = int(array[x+1][x1-1]) + 1
                if array[x][x1+1] != '#':
                    array[x][x1+1] = int(array[x][x1+1]) + 1
                if array[x+1][x1+1] != '#':
                    array[x+1][x1+1] = int(array[x+1][x1+1]) + 1
                if array[x+1][x1] != '#':
                    array[x+1][x1] = int(array[x+1][x1]) + 1
            elif ((x == n-1) and (x1 !=0)):
                if array[x][x1-1] != '#':
                    array[x][x1-1] = int(array[x][x1-1]) + 1
                if array[x-1][x1-1] != '#':
                    array[x-1][x1-1] = int(array[x-1][x1-1]) + 1
                if array[x][x1+1] != '#':
                    array[x][x1+1] = int(array[x][x1+1]) + 1
                if array[x-1][x1+1] != '#':
                    array[x-1][x1+1] = int(array[x-1][x1+1]) + 1
                if array[x-1][x1] != '#':
                    array[x-1][x1] = int(array[x-1][x1]) + 1
        
          
            elif (x != 0 and x1!=0):
                if array[x][x1-1] != '#':
                    array[x][x1-1] = int(array[x][x1-1]) + 1
                if array[x-1][x1-1] != '#':
                    array[x-1][x1-1] = int(array[x-1][x1-1]) + 1
                if array[x-1][x1+1] != '#':
                    array[x-1][x1+1] = int(array[x-1][x1+1]) + 1
                if array[x-1][x1] != '#':
                    array[x-1][x1] = int(array[x-1][x1]) + 1
                if array[x+1][x1-1] != '#':
                    array[x+1][x1-1] = int(array[x+1][x1-1]) + 1
                if array[x][x1+1] != '#':
                    array[x][x1+1] = int(array[x][x1+1]) + 1
                if array[x+1][x1] != '#':
                    array[x+1][x1] = int(array[x+1][x1]) + 1
                if array[x+1][x1+1] != '#':
                    array[x+1][x1+1] = int(array[x+1][x1+1]) + 1

for x in range(n):
    for x1 in range(n):
        array[x][x1] = str(array[x][x1])
    
for x in range(n):
    print(array[x])
    
# input samle case1:

# 5
# - - - - - 
# - - - - -
# - - # - -
# - - - - -
# - - - - -

# output:
# ['0', '0', '0', '0', '0']
# ['0', '1', '1', '1', '0']
# ['0', '1', '#', '1', '0']
# ['0', '1', '1', '1', '0']
# ['0', '0', '0', '0', '0']

# 5
# - # - - #
# - - - - -
# - - # - -
# - # - - #
# - # - - #

# output
# ['1', '#', '1', '1', '#']
# ['1', '2', '2', '2', '1']
# ['1', '2', '#', '2', '1']
# ['2', '#', '3', '3', '#']
# ['2', '#', '2', '2', '#']
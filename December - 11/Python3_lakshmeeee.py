# envi = ['_','~','_','_','_','_','~','_','_','~','_','~']
# jumps = [2,1,1,1,2,1,2,1]
envi = ['_','~','_','~','_','_','~','_','_','~','_','~']
jumps = [2,2,1,1,1,1,2,1,1]
# envi = [str(x) for x in input().split(',')]
# jumps = [int(x) for x in input().split(',')]
pos=0

for i in range(len(jumps)):
    pos+=jumps[i]
    if envi[pos]=='~':
        print('Score =',i)
        break


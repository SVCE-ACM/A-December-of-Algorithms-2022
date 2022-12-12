n=[int(x) for x in input().split()]
pos = int(input())-1
turn_str = input()
if turn_str=="Tanika":
    turn=0
elif turn_str=="Bob":
    turn=1

while(n[0]!=0):
    turn+=1
    if(turn>1):
        turn=0
    temp = n[pos]
    n[pos] = n[0]-1
    n[0] = n[pos]
    print(n)

if turn==1:
    print("Tanika wins the game!\nBob loses the game!")
else:
    print("Bob wins the game!\nTanika loses the game!")
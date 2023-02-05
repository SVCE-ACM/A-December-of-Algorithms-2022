n=int(input("Position="))
list_A=list(map(int,input("Set of numbers: ").split()))
turn=input("Player going first: ")
c=0
while(list_A[0]!=0):
   list_A[0]=list_A[0]-1
   t=list_A[0]
   list_A[0]=list_A[n-1]
   list_A[n-1]=t
   c+=1 
    
if(turn=='Tanika' and c%2==1):
    print("Tanika wins the game!\nBob loses the game!")
elif(turn=='Tanika' and c%2==0):
    print("Bob wins the game!\nTanika loses the game!")
elif(turn=='Bob' and c%2==1):
    print("Bob wins the game!\nTanika loses the game!")
elif(turn=='Bob' and c%2==0):
    print("Tanika wins the game!\nBob loses the game!")
    
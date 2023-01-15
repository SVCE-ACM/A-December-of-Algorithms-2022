
n=int(input())
a=[]
for i in range(n):
    b=list(map(int,input().split()))
    a.append(b)
i=0
j=0
dropped=0

current_position=a[i][j]
print("path_taken={",current_position,end=',')
dropped+=current_position
while(i+1 in range(0,n) and j+1 in range(0,n)):    
        if(a[i][j+1]<a[i+1][j]):
           current_position=a[i][j+1]
           j=j+1
        elif(a[i][j+1]>=a[i+1][j]):
           current_position=  a[i+1][j]
           i=i+1
        print(current_position,end=',') 
        dropped+=current_position
print(a[n-1][n-1],end="}")
dropped+=a[n-1][n-1]
print("\nThe minimum coins dropped is ",dropped)        
            
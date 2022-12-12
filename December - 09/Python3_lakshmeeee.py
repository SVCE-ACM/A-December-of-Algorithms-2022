n = int(input())
l = [str(x) for x in input().split()]
# l = ["Helloe", "Good", "Morninge", "Welcomee", "youe"]
length=[]

for i in range(len(l)):
    length.append(len(l[i]))

m = max(length)
pos=-1

for i in range(len(length)):
    if length[i]==m and length[i]%2!=0:
        pos=i
        break

if(pos==-1):
    print("Better luck next time")
else:
    print(l[pos])
people = [[2], [3, 4], [2], [2]]
spread={}
for i in  range(len(people)):
	spread[i+1]=1
spread.pop(1)

for i in range(len(people)):
   for j in range(len(people[i])):
       if(i+1!=people[i][j] and people[i][j] in spread):
          spread.pop(people[i][j])

if(len(spread)==0):
	print("Spread")
else:
	print("Not Spread")

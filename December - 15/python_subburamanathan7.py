MeetQueue = {}

limit= int(input('Enter the Queue Size'))

for i in range(limit):
	name = input("Enter name")
	time = input("Enter time")
	MeetQueue[name]=time

print(MeetQueue)
MeetQueue = sorted(MeetQueue.items(), key=lambda x:x[1],reverse=True)
Queue = dict(MeetQueue)
print (Queue)
while(Queue):
        print(Queue.popitem()[0])

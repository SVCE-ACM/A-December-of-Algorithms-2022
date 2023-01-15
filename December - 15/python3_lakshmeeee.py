from datetime import datetime

class Queue:
    def __init__(self):
        self.queue = []
    def enq(self,v):
        self.queue.append(v)
    def isempty(self):
        return(self.queue == [])
    def delq(self):
        v = None
        if not self.isempty():
            v = self.queue[0]
            self.queue = self.queue[1:]
        return(v)
    def __str__(self):
        return(str(self.queue))

l =  [['Wes', '12:00:30'],['Michella', '12:03:40'],['Asher', '12:00:01']]


def minl(l):
    for i in range(len(l)):
        d = datetime.strptime(l[i][1],'%H:%M:%S')
        k=i
        for j in range(i+1,len(l)):
            if (datetime.strptime(l[j][1],'%H:%M:%S')<d):
                d = datetime.strptime(l[j][1],'%H:%M:%S')
                k=j
        return l[k][0],k

q = Queue()
li = len(l)
i=0
while(i<li):
    name, ind = minl(l)
    i+=1
    q.enq(name)
    l.pop(ind)

print(q)
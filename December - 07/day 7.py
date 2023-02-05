
grid=[['A','S','S','E','R','T','I','V','E','N','E','S','S','L','J'],
      ['C','F','O','G','O','O','D','P','O','S','I','T','I','V','E'],
      ['O','P','E','N','B','M','U','R','E','W','O','P','R','P','S'],
      ['M','E','D','I','A','T','I','O','N','E','L','D','I','O','G'],
      ['M','A','A','S','R','E','G','J','E','W','I','N','W','I','N'],
      ['U','C','I','A','E','M','O','E','E','C','S','K','E','N','I'],
      ['N','E','M','R','S','H','A','C','D','V','T','W','T','T','L'],
      ['I','T','E','H','O','T','L','T','S','T','E','R','A','O','E'],
      ['C','A','S','P','L','G','L','S','I','U','N','E','R','F','E'],
      ['A','I','S','A','U','S','Y','T','P','O','I','S','E','V','F'],
      ['T','T','A','R','T','T','D','O','C','E','N','P','P','I','H'],
      ['I','O','G','A','I','G','U','P','Y','M','G','O','O','E','E'],
      ['O','G','E','P','O','A','F','P','Q','I','E','N','O','W','A'],
      ['N','E','C','O','N','F','L','I','C','T','S','D','C','E','R'],
      ['F','N','H','T','C','A','T','N','O','C','E','Y','E','B','T']]
      
search=input()

c=[]
b=[]
flag=0
for i in range(0,15):
    x=''
    for j in range(0,15):
        x+=grid[i][j]
    c.append(x)
#print(c)
for i in range(0,15):
    x=''
    for j in range(0,15):
        x+=grid[j][i]
    b.append(x)    
#print(b)    

for i in range(0,15):
    if(search in c[i] or search in b[i]):
        flag=1
        print("found")
        break
        
if(flag==0):
    print("not found")

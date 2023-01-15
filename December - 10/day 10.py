a=[]
n=int(input())
vowels=['a','e','i','o','u','A','E','I','O','U']
for i in range(0,n):
    x=int(input())
    word=input()
    c=0
    for j in word:
      if j in vowels:    
        c+=1
        
    if (x-c)>4:
        a.append("NO")
    else:
        a.append("YES")
for i in a:
    print(i)
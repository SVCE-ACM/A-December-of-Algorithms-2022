nw = int(input())
words = []

for i in range(nw*2):
    word = input()
    if (i+1)%2==0:
        words.append(word)

print(words)

vowels = ['a', 'e', 'i', 'o', 'u']

for word in words:
    c=0
    
    for letter in word:
        if letter not in vowels:
            c+=1
        else:
            c=0
        
        if c==4:
            print('NO')
            break
    if c<4:
        print('YES')

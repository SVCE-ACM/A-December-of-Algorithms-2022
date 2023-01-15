
n=int(input())
clue=[]
for i in range(n):
    a=list(input().split(','))
    s=''
    for j in a:
        s+=j
    byte_array=bytes.fromhex(s)
    ascii_str=byte_array.decode()
    clue.append(ascii_str)
for i in clue:
    print(i)
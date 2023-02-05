n = int(input())
s = []

for x in range(n):
    l = input()
    s.append(l)
    
answer = []

for x in range(len(s)):
    mm = s[x].split(', ')
    string = ""
    for m in mm:
        string = string + chr(int(m, 16)) 
    print(string)


# Sample Input and outputs
#  ----> Input 1:
# 1
# 56, 6F, 75, 67, 68, 74
# Vought

#  ------> Input 2:
# 2
# 49, 6E, 76, 61, 64, 65
# 4D, 69, 6C, 69, 74, 61, 72, 79
# Invade
# Military
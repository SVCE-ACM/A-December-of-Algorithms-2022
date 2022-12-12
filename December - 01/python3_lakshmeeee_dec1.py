code = [ "56", "6F", "75", "67", "68", "74"]
# code = input().split(',[]')
# print(code)
sr = ""
for i in code:
    ch = chr(int(i, 16))
    sr+=ch
print(sr)


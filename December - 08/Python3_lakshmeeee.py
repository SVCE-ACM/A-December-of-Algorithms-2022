codelist = input()
# codelist = "DEMOCRACY"
code = list(codelist)
#print(code)

for i in range(len(code)):
    if (i+1)%2==0:
        temp = code[i]
        code[i]=code[i-1]
        code[i-1]=temp
#print(code)
print(''.join(code))
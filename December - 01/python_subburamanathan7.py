count = int(input("Enter number of words"))

arr=[]
for i in range(count):
    sub=[]
    limit = int(input("Enter size of each word"))
    for j in range(limit):
        code = input("Enter code")
        sub.append(code)

    arr.append(sub)

ret_arr=[]
for i in arr:
    sub=[]
    for j in i:
        temp= int(j,base=16)
        sub.append(chr(temp))

    ret_arr.append(sub)
        
for i in ret_arr:
    print("\n")
    for j in i:
        print(j,end="")

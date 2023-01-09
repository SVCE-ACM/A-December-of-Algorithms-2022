#day_15
y = 1
while y > 0:
    print("#problem_statment_17!!")    
    str = input("Str = ").replace("“","").replace("”","")
    row = int(input("Row = "))
    if row == 1:
        print(str)    
    l = len(str)
    arr=["" for x in range(l)]
    # print(arr)
    row_r = 0
    for i in range(l):
        arr[row_r] += str[i]
        # print(str[i])
        if row_r == row - 1:
            down = False
        elif row_r == 0:
            down = True
        if down:
            row_r += 1
        else:
            row_r -= 1
    print("\nOutput:")
    for i in range(row):
        print(arr[i], end = "")
    print("\n")
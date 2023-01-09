#day_10
y = 1
while y > 0:
    print("#problem_statment_10!!")
    T = int(input(""))
    vowels = ["a","e","i","o","u"]
    output = []
    for i in range(0,T):
        index = 0
        N = int(input(""))
        S = input("")
        s_1 = S.lower()
        s_l = list(s_1)
        for j in s_l:
            if index<4:
                if j in vowels:
                    index=0
                    pass
                else:
                    index+=1  
            else:
                pass   
        if index<4:
            output.append("Y")
        else:
            output.append("N")
    for j in output:
        if j == "Y":
            print("YES")
        else:
            print("NO")
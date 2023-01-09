#day_11
y = 1
while y > 0:
    print("#problem_statment_11!!")
    l_w_lis = input("").replace(" ","").replace("’","").replace("‘","").replace("[","").replace("]","").split(",")
    step_lis = input("").replace("[","").replace("]","").split(",")
    step_lis = [int(x) for x in step_lis]
    w_lis = []
    jump, index = 0, 0
    for i in l_w_lis:
        if i == "~":
            w_lis.append(index)
        index += 1
    # print(w_lis)
    index = 0
    for i in step_lis:
        if i == 2:
            index+=2
            if index in w_lis:
                break
            else:
                jump+=1
        else:
            index+=1
            if index in w_lis:
                break
            else:
                jump+=1
        # print(i,index,jump)
        

    print("Score:",jump)
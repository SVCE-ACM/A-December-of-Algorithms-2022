#day_05
y = 1
while y > 0:
    print("#problem_statment_05!!")
    input_f_p = int(input("fuel_price="))
    f_p = input_f_p
    day = 1
    exp = 0


    while day <= 31:
        if day % 3 == 0:
            f_p += 3
        if day % 5 == 0:
            f_p -= 2  
        day +=1
        exp += f_p
        # print(day,f_p)
        f_p = input_f_p
        
    exp = exp*2
    print("Expenditure=",exp)

    if exp > 5000:
        print("EXPENDITURE EXCEEDING LIMIT")
    else:
        print("EXPENDITURE WITHIN LIMIT")
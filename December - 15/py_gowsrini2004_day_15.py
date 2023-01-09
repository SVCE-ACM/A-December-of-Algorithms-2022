#day_15
y = 1
while y > 0:
    print("#problem_statment_15!!")
    input_i = input("").replace("},",",").replace(", ",",").replace("}","").replace("{","").split(",")
    names,time_stamp= [],[]
    for i in range (0,len(input_i)):
        if i % 2 == 0:
            names.append(input_i[i])
        else:
            time_stamp.append(input_i[i])
    res = {names[i]: time_stamp[i] for i in range(len(names))}      
    sorted_res = sorted(res.items(),key=lambda item: item[1])
    res = dict(sorted_res)
    print("\n\nOutput:")

    i = 1
    for key in res:
        if i < len(res):
            print(key,end=", ")
            i+=1
        else:
            print(key,end=".")
            i+=1
    print("\n")
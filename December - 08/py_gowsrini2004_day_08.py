#day_08
y = 1
while y > 0:
    print("#problem_statment_08!!")
    s = input("Input:  ")
    index,u,new_str,updated_list,list_str = 0, 0,"",[],list(s)
    for i in list_str:
        if index % 2 == 0:
            updated_list.append(i)
            index += 1
        else:
            u = index-1
            updated_list.insert(u, i)
            # print(index,i)
            index += 1
    for i in updated_list:
        new_str += i
    print("Output:",new_str)
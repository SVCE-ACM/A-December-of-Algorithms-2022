#day_12
y = 1
while y > 0:
    print("#problem_statment_12!!")
    n = int(input(""))
    path = input("path: ").replace(" ","").replace("{","").replace("}","").split(",")
    path = [int(x) for x in path]
    # print(path)
    index = 0
    final_lis = []
    final_lis.append(path[0])
    while index<((n*n)-1):
        if index == ((n*(n-1))-1):
            y = path[index+n]
            final_lis.append(y)
            break
        if index>= ((n*n)-(n-1)):
            x = path[index+1]
            final_lis.append(x)
            index+=1                                                                                  
        else:
            x = path[index+1]
            y = path[index+n]
        # print(x,y,index)
            if y>x:
                final_lis.append(x)
                index+=1
            elif x>y or x==y:
                final_lis.append(y)
                index+=n
            
    # print(final_lis)
    sum = 0
    for i in final_lis:
        sum+=i


    print("\n\n")
    print("path_taken="+'{' + ','.join([str(x) for x in final_lis]) + '}')
    print("The minimum coins dropped is",sum)
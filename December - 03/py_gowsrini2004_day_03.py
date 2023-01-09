#day_03
import numpy as np
import json
y = 1
while y > 0:
    print("#problem_statment_03!!")
    n = int(input("n ="))
    v1_mat = []
    hash_ind_lis = []
    add_one_ind_lis = []

    x = 1
    index = n-1
    for i in range(0, n):
        mat = input("")
        junk_mat = mat.split("\"")
        for j in junk_mat:
            if j == "[" or j == "]" or j == "]," or j == ", ":
                pass
            else:
                v1_mat.append(j)


    for i in range(0, len(v1_mat)):
        if v1_mat[i] == "#":
            hash_ind_lis.append(i)
        else:
            v1_mat[i] = 0

    col_h_1, col_h_2,list_1 = [], [],[]

    index_of_column_last = []
    element =0
    for i in range (0,((n*n))):
        if element==4:
            index_of_column_last.append(i)
            element=-1
        element+=1

    for j in hash_ind_lis:
        # print(j)
        if j % n == 0:
            col_h_1.append(j)
        elif j in index_of_column_last:
            col_h_2.append(j)
            


    for i in hash_ind_lis:
        if i == 0:
            x1 = i+1
            x2 = i+n
            x3 = i+(n+1)
            temp = [x1, x2, x3]

        elif i < (n-1) and i > 0:
            x1 = i+1
            x2 = i-1
            x3 = i+n
            x4 = i+(n-1)
            x5 = i+(n+1)
            temp = [x1, x2, x3, x4, x5]
        elif i == n-1:
            x1 = i-1
            x2 = i+(n-1)
            x3 = i+n
            temp = [x1, x2, x3]

        elif i in col_h_1 and i != 0 and i != ((n*n)-n):
            x1 = i-n
            x2 = i-(n-1)
            x3 = i+1
            x4 = i+n
            x5 = i+(n+1)
            temp = [x1, x2, x3, x4, x5]

        elif i == (n*n)-n:
            x1 = i-n
            x2 = i-(n+1)
            x3 = i+1
            temp = [x1, x2, x3]

        elif i > (n*n)-n and i < ((n*n)-1):
            x1 = i-(n-1)
            x2 = i-(n+1)
            x3 = i-n
            x4 = i-1
            x5 = i+1
            temp = [x1, x2, x3, x4, x5]

        elif i == (n*n)-1:
            x1 = i-(n+1)
            x2 = i-n
            x3 = i-1
            temp = [x1, x2, x3]

        elif i in col_h_2 and i != (n*n)-1 and i != (n-1):
            x1 = i-1
            x2 = i-(n+1)
            x3 = i-n
            x4 = i+n
            x5 = i+(n-1)
            temp = [x1, x2, x3, x4, x5]
        else:
            x1 = i-(n-1)
            x2 = i-(n+1)
            x3 = i-n
            x4 = i-1
            x5 = i+1
            x6 = i+n
            x7 = i+(n-1)
            x8 = i+(n+1)
            temp = [x1, x2, x3, x4, x5, x6, x7, x8]
        for j in temp:
            list_1.append(j)
            
    for i in list_1:
        if i in hash_ind_lis:
            list_1.remove(i)
            
    # print(hash_ind_lis)
    # print(list_1)
    # print(v1_mat)

    for i in list_1:
        try:
            v1_mat[i] += 1  
        except:
            pass
        
    A = [str(x) for x in v1_mat]


    def nest_list(list1,rows, columns):    
            result=[]               
            start = 0
            end = columns
            for i in range(rows): 
                result.append(list1[start:end])
                start +=columns
                end += columns
            return result
    x = nest_list(A,n,n)
    print("\n\noutput:")

    index = 0
    for i in x:
        if index<(n-1):
            print(json.dumps(i),",",sep="")
            index+=1
        else:
            print(json.dumps(i))
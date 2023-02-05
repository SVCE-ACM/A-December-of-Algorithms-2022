#day_13
y = 1
while y > 0:
    print("#problem_statment_13!!")
    def check_condition(n, path, x, y, lis):
        if x >= 0 and y >= 0 and x < n and y < n and path[x][y] == 1 and lis[x][y] == 0:
            return True
        return False
 
    def move_path(n, path, x1, y1, x, y, lis):
        if x == n-1 and y == n-1:
            return True
        for i in range(4):
            x2 = x + x1[i]
            y2 = y + y1[i]
            if check_condition(n, path, x2, y2, lis):
                lis[x2][y2] = 1
                if move_path(n, path, x1, y1, x2, y2, lis):
                    return True
                lis[x2][y2] = 0
        return False
    
    def find_path(path):
        lis = [[0 for i in range(n)] for i in range(n)]
        lis[0][0] = 1
        x1 = [-1, 1, 0, 0]
        y1 = [0, 0, -1, 1]
        if move_path(n, path, x1, y1, 0, 0, lis):
            for i in range(n):
                for j in range(n):
                    pre_final_lis.append(lis[i][j])
                print()
        else:
            print('Path Cannot Be Found')
            
    def sub_array(inp,out):
        start = 0
        end = len(inp)
        step = n
        for i in range(start, end, step):
            x = i
            out.append(inp[x:x+step])
            
            
    n = int(input("n= "))
    v1_mat,path,final_lis,pre_final_lis= [],[],[],[]
    for i in range(0, n):
        mat = input("").replace(" ","").replace("{","").replace("}","").split(",")
        mat = [int(x) for x in mat]
        for j in mat:
                v1_mat.append(j)  

    sub_array(v1_mat,path)
    find_path(path)
    sub_array(pre_final_lis,final_lis)
    # print(pre_final_lis,final_lis)
    print("OUTPUT:")
    for i in final_lis:
        print('{' + ','.join([str(x) for x in i]) + '}')
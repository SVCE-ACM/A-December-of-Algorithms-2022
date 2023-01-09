#day_14
y = 1
while y > 0:
    print("#problem_statment_14!!")
    def co_g(input_G, color, p, c):
        if color[p] != -1 and color[p] != c:
            return False
        color[p] = c
        ans = True
        for i in range(0, n):
            if input_G[p][i]:
                if color[i] == -1:
                    ans &= co_g(input_G, color, i, 1-c)  
                if color[i] !=-1 and color[i] != 1-c:
                    return False 
            if not ans:
                return False
        return True
    def check_bipartite(input_G):
        color = [-1]*n
        p = 0
        return co_g(input_G, color, p, 1)

    #main
    n = int(input(""))
    print("")
    v1_mat,input_G = [],[]
    for i in range(0, n):
            mat = input("").split(" ")
            mat = [int(x) for x in mat]
            for j in mat:
                    v1_mat.append(j)  
    start = 0
    end = len(v1_mat)
    step = n
    for i in range(start, end, step):
        x = i
        input_G.append(v1_mat[x:x+step])   
    print("\n\nOUTPUT:")
    if check_bipartite(input_G): 
        print("The graph is Bipartite!")
    else: 
        print("The graph is Not Bipartite!")
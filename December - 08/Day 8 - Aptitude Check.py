S = list(input())
N = len(S)
for i in range(0,N,2):
   if i!=N-1:    
     temp = S[i]
     S[i] = S[i+1]
     S[i+1] = temp
S_1 = "".join(S)
print(S_1)
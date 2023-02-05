T = int(input())
C = []
for i in range(0,T):
  N = int(input())
  STR = list(input())
  if len(STR)>N:
    print(f'Error! Only {N} characters allowed!')
  else:
    V = ['a','e','i','o','u']
    count = 0
    for I in range(0,N):
      if I!=N-1:
        if STR[I] and STR [I+1] not in V:
           count = count + 1
    if count > 3:
      C.append("NO")
    else:
      C.append("YES")
N1 = len(C)
print("\n")
for J in range(0,N1):
  print(C[J],sep="\n")
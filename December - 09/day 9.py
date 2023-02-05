
import math
n=int(input())
list_A=list(input().split())
len_arr=[]
ind_arr=[]
for i in range(0,n):
   if(len(list_A[i])%2==1):
       len_arr.append(len(list_A[i]))
       ind_arr.append(i)

if(len_arr==[]):
    print("Better luck next time")
else:
    max=-math.inf
    for i in range(0,len(len_arr)):
        if len_arr[i]>max:
            max=len_arr[i]
            word=ind_arr[i]
    print(list_A[word])    
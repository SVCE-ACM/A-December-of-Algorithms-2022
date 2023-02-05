income = 50000
x = int(input())
y=x
total=0

for i in range(1,32):
    x=y
    if(i%3==0):
        x+=3
    if(i%5==0):
        x-=2
    total+=2*x

print('Expenditure = ',total)
if(total>income/10):
    print("EXPENDITURE EXCEEDING LIMIT")
else:
    print("EXPENDITURE WITHIN LIMIT")
    
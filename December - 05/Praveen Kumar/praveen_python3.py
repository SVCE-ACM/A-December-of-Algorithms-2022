n = int(input())
x1 = 0
for x in range(1, 32):
    if x % 3 == 0:
        n = n+3
        x1 = x1 + (n*2)
    if x % 5 == 0:
        n = n-2
        x1 = x1 + (n*2)
    else:
        x1 = x1+(n*2)
    print(x1, x, 'prince',n)

if x1 > 5000:
    print('Expenditure=',x1)
    print('EXPENDITURE EXCEEDING LIMIT')
else:
    print('Expenditure=',x1)
    print('EXPENDITURE WITHIN LIMIT')
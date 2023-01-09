#day04
from sys import maxsize
y = 1
while y > 0:
    print("#problem_statment_04!!")
    max_so_far = -maxsize - 1
    max_ending_here, start, end, s = 0, 0, 0, 0
    s_change,a = [],[]
    size = int(input("No. of Days: "))
    a_1 = input("Given stock market change values: ").replace(" ","").replace("{","").replace("}","").split(",")
    a = [int(i) for i in a_1]
    for i in range(0, size):
        max_ending_here += a[i]

        if max_so_far < max_ending_here:
            max_so_far = max_ending_here
            start = s
            end = i

        if max_ending_here < 0:
            max_ending_here = 0
            s = i+1

    print("Profit Value: ", max_so_far)
    print("Proposed days to sell: Day:", (start+1), ", to Day:", (end+1))
    for i in range(start, (end+1)):
        s_change.append(a[i])
    print("Stock market Change Values: " + '{' + ', '.join([str(x) for x in s_change]) + '}')
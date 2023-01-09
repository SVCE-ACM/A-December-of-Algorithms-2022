#day_09
y = 1
while y > 0:
    print("#problem_statment_09!!")
    index = 0
    n = int(input(""))
    s = input("")
    str = s.split(" ")
    max = ""
    for i in str:
        l = len(i)
        index +=1
        if l > len(max):
            if index<n:
                if l % 2 == 0:
                    max = ''
                else:
                    max = i
            if index == n:
                if l > len(max):
                    if l % 2 == 0:
                        max = ''
                    else:
                        max = i
                        
            
    if len(max)%2 == 0:
        print("Better luck next time")
    else:
        print(max)
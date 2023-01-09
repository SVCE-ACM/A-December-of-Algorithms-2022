#day_15
y = 1
while y > 0:
    print("#problem_statment_16!!")
    def m_a(lis):
        l = 0
        r = len(lis) -1
        area = 0
        while l < r:
            area = max(area, min(lis[l],lis[r])*(r - l))
            if lis[l] < lis[r]:
                l+=1
            else:
                r-=1
        return area

    step_lis = input("height = ").replace("[","").replace("]","").split(",")
    step_lis = [int(x) for x in step_lis]
    print("\nOutput:",m_a(step_lis))
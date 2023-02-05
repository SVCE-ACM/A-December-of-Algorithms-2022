#day_01

y = 1
while y > 0:
    print("#problem_statment_01!!")
    array_pre = input("")
    junk_hexa = array_pre.split("},")
    l = len(junk_hexa)
    d = {}
    x=1
    for i in junk_hexa:
        d["lis{0}".format(x)] = i
        x+=1
    #d=dict
    t=0
    finlist=[]
    for i in d:
        a=d[i]
        if(t==len(d)-1):
            a1=a[1:len(a)-1]
            tlist=a1.split(',')
            finlist.append(tlist)
        else:
            a1=a[1:len(a)]
            tlist=a1.split(',')
            finlist.append(tlist)
        t+=1

    ascl=[]

    for i in finlist:
        for j in i:
            ascl.append(bytes.fromhex(j).decode('utf-8'))
        ascl.append(' ')

    for i in ascl:
        print(i,end='')
    print("\n")
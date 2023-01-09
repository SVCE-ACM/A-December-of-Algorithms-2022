#day_02
y = 1
while y > 0:
    print("#problem_statment_02!!")
    a=input()
    msg_split=a.split()
    for i in msg_split:
        word_t=i[:len(i)-2:]
        word_f1,word_f2=word_t[len(word_t)-2:len(word_t)+1],word_t[:len(word_t)-2]
        finalword=word_f1+word_f2
        print(finalword)
crossword = [ 'ASSERTIVENESSLJ',
'CFOGOODPOSITIVE',
'OPENBMUREWOPRPS',
'MEDIATIONELDIOG',
'MAASREGJEWINWIN',
'UCIAEMOEECSKENI',
'NEMRSHACDVTWTTL',
'ITEHOTLTSTERAOE',
'CASPLGLSIUNERFE',
'AISAUSYTPOISEVF',
'TTARTTDOCENPPIH',
'IOGAIGUPYMGOOEE',
'OGEPOAFPQIENOWA',
'NECONFLICTSDCER',
'FNHTCATNOCEYEBT']

# word = 'DOCUMENT'
# word = 'MEDIATION'
word = input()
flag=0

for r in range(14):
    if(flag==2):
        break
    for c in range(14):
        if(flag)==2:
            break
        if crossword[r][c]==word[0]:
            flag=0
            if crossword[r][c+1]==word[1]:
                h=c+1
                for j in word[2:]:
                    h+=1
                    if h==15:
                        flag=1
                        break
                    elif(crossword[r][h])!=j:
                        flag=1
                        break
                    # print(crossword[r][h])
                if flag==0:
                    flag=2
            flag-0
            if crossword[r+1][c]==word[1]:
                k=r+1
                for j in word[2:]:
                    k+=1
                    if k==15:
                        flag=1
                        break
                    elif(crossword[k][c])!=j:
                        flag=1
                        break
                    # print(crossword[k][c])
                if flag==0:
                    flag=2
            if flag==2:
                print('Found')

if(flag!=2):
    print('Not Found')
    
    
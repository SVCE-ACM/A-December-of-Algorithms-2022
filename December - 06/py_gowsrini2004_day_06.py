#day_06
y = 1
while y > 0:
    print("#problem_statment_06!!")
    t,temp,count = 1,0,1
    pos = int(input("Enter The Position: "))
    p = pos -1
    set = input("Set of Numbers: ")
    player_1 = input("Player going first:")
    if player_1 == "Tanika" or player_1 == "tanika":
        player_1 = "Tanika"
        player_2 = "Bob"
    else:
        player_2 = "Tanika"
        player_1 = "Bob"  
    set_l = set.split()
    set_l_n = []
    for j in set_l:
        set_l_n.append(int(j))
    set_l = set_l_n
    # print(set_l)
    play = 1
    while t == 1:
        set_l[0] -= 1
        temp = set_l[p]
        set_l[p] = set_l[0]
        set_l[0] = temp
        if set_l[0] == 0:
            t = 0
        if count%2 == 0:
            play = 1
        else:
            play = 2
        # print(set_l)
        count = 0  
    # print(player_1,player_2)
    if play == 1:
        winnner = player_1
        loser = player_2
        print(winnner,"wins the game!\n",loser,"loses the game!")
    else:
        winnner = player_2 
        loser = player_1
        print(winnner,"wins the game!\n",loser,"loses the game!")
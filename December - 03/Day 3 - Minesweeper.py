def display_minefield(minefield,n):
    rows = n
    cols = n

    output = [list(row) for row in minefield]

    for i in range(rows):
        for j in range(cols):
            if minefield[i][j] == '-':
                count = 0
                for x in range(-1, 2):
                    for y in range(-1, 2):
                        row = i + x
                        col = j + y
                        if row >= 0 and row < rows and col >= 0 and col < cols:
                            if minefield[row][col] == '#':
                                count += 1
                
                output[i][j] = str(count)
    for row in output:
        print("".join(row))
N = int(input())
minefield1 = [["-", "-", "-", "-", "-"],
["-", "-", "-", "-", "-"],
["-", "-", "#", "-", "-"],
["-", "-", "-", "-", "-"],
["-", "-", "-", "-", "-"]]
display_minefield(minefield1,N)
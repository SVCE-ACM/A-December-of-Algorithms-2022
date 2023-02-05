s = input("Enter the string")
numRows = int(input("Enter the number of rows"))

if numRows == 1:
  print(s)

rows = ["" for i in range(numRows)]
direction = -1
row = 0
for i in range(len(s)):
  rows[row]+=s[i]
  if (row == 0 or row==numRows-1):
    direction *= -1
  row+=direction
            
print("".join(rows))
        

fuel_price = int(input())
income = 50000

fuel_expenditure = (fuel_price * 2 * 31) + (fuel_price + 3) * 3 + (fuel_price - 2) * 5
print(fuel_expenditure)
if fuel_expenditure > (income * 0.1):
   print("EXPENDITURE EXCEEDING LIMIT")
else:
   print("EXPENDITURE WITHIN LIMIT")

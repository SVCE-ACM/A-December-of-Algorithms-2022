fuel=int(input("fuel_price="))
total_fuel_cost=(10*(fuel+3))+(6*(fuel-2))+(15*fuel)
expenditure=total_fuel_cost*2
print("Expenditure=",expenditure)
if(expenditure<5000):
    print("EXPENDITURE WITHIN LIMIT")
else:
    print("EXPENDITURE EXCEEDING LIMIT")
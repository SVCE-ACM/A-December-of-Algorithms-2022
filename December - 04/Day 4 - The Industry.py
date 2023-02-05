def max_profit(changes,n):
    n = len(changes)
    
    max_profit = 0
    start_day = 0
    end_day = n
    stock_market_change_values = []
    for i in range(1, n):
        if changes[i] > changes[i - 1]:
            max_profit += changes[i] - changes[i - 1]
            end_day = i
            stock_market_change_values.append(changes[i])
        else:
            start_day = i
    return max_profit, start_day, end_day, stock_market_change_values


changes = [5,-4,12,-2, -5, 6, -2,-3, 1, 5, -6,-11,7,-31,9,2,-3,8,-5]
n = 19
profit, start, end, stock_market_change_values = max_profit(changes,n)
print("Maximum profit:", profit)
print("Buy on day:", start+1)
print("Sell on day:", end+1)
print("Stock market change values:", stock_market_change_values)
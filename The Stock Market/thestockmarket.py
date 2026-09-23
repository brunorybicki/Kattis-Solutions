n = int(input())
k = int(input())

prices = []

for i in range(n):
    prices.append(int(input()))

maxProfit = prices[k] - prices[0]

for i in range(1, n - k):
    if prices[i + k] - prices[i] > maxProfit:
        maxProfit = prices[i + k] - prices[i]

print(maxProfit)

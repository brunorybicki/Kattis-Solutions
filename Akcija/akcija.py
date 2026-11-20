n = int(input())

prices = []

for i in range(n):
    prices.append(int(input()))

prices.sort()

total = 0

for i in range(n):
    if (n - i) % 3 != 0:
        total += prices[i]

print(total)

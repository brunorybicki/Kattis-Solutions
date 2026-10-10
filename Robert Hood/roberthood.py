import math

C = int(input())

low = [1001] * 2001
high = [-1001] * 2001

for i in range(C):
    x, y = map(int, input().split())

    low[x + 1000] = min(low[x + 1000], y)
    high[x + 1000] = max(high[x + 1000], y)

cx = []
cy = []

for i in range(2001):
    if low[i] != 1001:
        cx.append(i - 1000)
        cy.append(low[i])

        cx.append(i - 1000)
        cy.append(high[i])

count = len(cx)
best = 0

for i in range(count):
    for j in range(i + 1, count):
        dx = cx[i] - cx[j]
        dy = cy[i] - cy[j]

        best = max(best, dx * dx + dy * dy)

print(f"{math.sqrt(best):.9f}")

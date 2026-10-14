n, c = map(int, input().split())

cheapest = [2147483647] * 24

for i in range(n):
    t, p = map(int, input().split())

    cheapest[t] = min(cheapest[t], p)

cheapest.sort()

total = 0
clubs = 0

for i in range(24):
    if cheapest[i] <= c - total:
        total += cheapest[i]
        clubs += 1
    else:
        break

print(clubs)

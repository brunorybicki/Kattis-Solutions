n, k = map(int, input().split())

hours = [0] * 24

for i in range(n):
    a, b = map(int, input().split())

    for h in range(a, b):
        hours[h] += 1

count = 0

for h in range(24):
    if hours[h] >= k:
        count += 1

print(count)

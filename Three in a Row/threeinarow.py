n = int(input())

x = 1
count = 0

while x * (x + 1) * (x + 2) < n:
    count += 1
    x += 1

print(count)

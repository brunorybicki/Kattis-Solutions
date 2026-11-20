key = input()

zoom = len(key)
x = 0
y = 0

for i in range(zoom):
    digit = int(key[i])

    x = 2 * x + digit % 2
    y = 2 * y + digit // 2

print(zoom, x, y)

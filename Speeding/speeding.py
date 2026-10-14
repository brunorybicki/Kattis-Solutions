n = int(input())

t = []
d = []

for i in range(n):
    a, b = map(int, input().split())
    t.append(a)
    d.append(b)

maximumSpeed = 0

for i in range(1, n):
    speed = (d[i] - d[i - 1]) // (t[i] - t[i - 1])

    maximumSpeed = max(maximumSpeed, speed)

print(maximumSpeed)

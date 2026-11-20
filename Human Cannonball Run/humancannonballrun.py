import math

startX, startY = map(float, input().split())
endX, endY = map(float, input().split())

n = int(input())

x = [startX]
y = [startY]

for i in range(n):
    a, b = map(float, input().split())
    x.append(a)
    y.append(b)

x.append(endX)
y.append(endY)

time = [[0.0] * (n + 2) for i in range(n + 2)]

for i in range(n + 2):
    for j in range(n + 2):
        distance = math.sqrt((x[i] - x[j]) ** 2 + (y[i] - y[j]) ** 2)

        time[i][j] = distance / 5

        if i >= 1 and i <= n and 2 + abs(distance - 50) / 5 < time[i][j]:
            time[i][j] = 2 + abs(distance - 50) / 5

for k in range(n + 2):
    for i in range(n + 2):
        for j in range(n + 2):
            if time[i][k] + time[k][j] < time[i][j]:
                time[i][j] = time[i][k] + time[k][j]

print("%.6f" % time[0][n + 1])

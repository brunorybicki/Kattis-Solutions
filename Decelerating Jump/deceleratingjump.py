n = int(input())
p = [0] + list(map(int, input().split()))

negative = -4 * 10 ** 18
best = [[negative] * (n + 2) for i in range(n + 1)]

for j in range(1, n + 1):
    best[1][j] = p[1]

for i in range(2, n + 1):
    for j in range(i - 1, 0, -1):
        best[i][j] = max(p[i] + best[i - j][j], best[i][j + 1])

print(best[n][1])

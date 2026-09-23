N = int(input())
M = int(input())

names = input().split()

totals = [0] * N

for i in range(M):
    points = list(map(int, input().split()))

    for j in range(N):
        totals[j] += points[j]

best = 0

for j in range(1, N):
    if totals[j] > totals[best]:
        best = j

print(names[best])

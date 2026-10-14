n = int(input())
a = list(map(int, input().split()))

count = [0] * 7

for i in range(n):
    count[a[i]] += 1

winner = -1
best = -1

for i in range(n):
    if count[a[i]] == 1 and a[i] > best:
        best = a[i]
        winner = i + 1

if winner == -1:
    print("none")
else:
    print(winner)

N, M = map(int, input().split())

counts = [0] * 7

for i in range(N):
    t = int(input())
    
    counts[t] += 1

maxCount = 0

for i in range(1, 7):
    if counts[i] > maxCount:
        maxCount = counts[i]

if N - maxCount <= M:
    print("Ja")
else:
    print("Nej")

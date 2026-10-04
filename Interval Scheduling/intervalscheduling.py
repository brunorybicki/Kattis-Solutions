n = int(input())

interval = []

for i in range(n):
    s, f = map(int, input().split())
    interval.append((s, f))

interval.sort(key=lambda x: x[1])

count = 0
lastFinish = -1

for s, f in interval:
    if s >= lastFinish:
        count += 1
        lastFinish = f

print(count)

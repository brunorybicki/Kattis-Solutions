N = int(input())
t = list(map(int, input().split()))

t.sort(reverse=True)

maximumTimeToGrow = 0

for i in range(N):
    timeToGrow = (i + 1) + t[i]

    if timeToGrow > maximumTimeToGrow:
        maximumTimeToGrow = timeToGrow

print(maximumTimeToGrow + 1)

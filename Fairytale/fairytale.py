t = int(input())

for test in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    used = [0] * 4
    count = 0

    for i in range(n):
        used[(a[i] - 1) // 10] = 1

    for i in range(4):
        if used[i]:
            count += 1

    print(count)

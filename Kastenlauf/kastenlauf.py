t = int(input())

for _ in range(t):
    n = int(input())

    x = []
    y = []

    for i in range(n + 2):
        a, b = map(int, input().split())
        x.append(a)
        y.append(b)

    reach = [[abs(x[i] - x[j]) + abs(y[i] - y[j]) for j in range(n + 2)] for i in range(n + 2)]

    for k in range(n + 2):
        for i in range(n + 2):
            for j in range(n + 2):
                if reach[i][k] <= 1000 and reach[k][j] <= 1000:
                    reach[i][j] = 1

    if reach[0][n + 1] <= 1000:
        print("happy")
    else:
        print("sad")

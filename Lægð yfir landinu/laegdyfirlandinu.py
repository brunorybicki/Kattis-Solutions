n, m = map(int, input().split())

a = []

for i in range(n):
    a.append(list(map(int, input().split())))

found = False

for i in range(1, n - 1):
    for j in range(1, m - 1):
        if a[i][j] < a[i - 1][j] and a[i][j] < a[i + 1][j] and a[i][j] < a[i][j - 1] and a[i][j] < a[i][j + 1]:
            found = True

if found:
    print("Jebb")
else:
    print("Neibb")

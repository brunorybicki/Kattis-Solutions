def find(parent, x):
    while parent[x] != x:
        parent[x] = parent[parent[x]]
        x = parent[x]

    return x


n, m = map(int, input().split())

o = [int(input()) for i in range(n)]

parent = list(range(n))

for i in range(m):
    a, b = map(int, input().split())
    parent[find(parent, a)] = find(parent, b)

sums = [0] * n

for i in range(n):
    sums[find(parent, i)] += o[i]

if all(s == 0 for s in sums):
    print("POSSIBLE")
else:
    print("IMPOSSIBLE")

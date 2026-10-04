def find(x):
    while parent[x] != x:
        parent[x] = parent[parent[x]]
        x = parent[x]

    return x


n, T = map(int, input().split())

people = []

for i in range(n):
    c, t = map(int, input().split())
    people.append((c, t))

people.sort(key=lambda x: x[0], reverse=True)

parent = list(range(T + 1))

total = 0

for c, t in people:
    wanted = t + 1
    slot = find(wanted)

    if slot > 0:
        total += c
        parent[slot] = slot - 1

print(total)

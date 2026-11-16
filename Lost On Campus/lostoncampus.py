w, h = map(int, input().split())

grid = []
dist = []

for i in range(h):
    grid.append(input())
    dist.append([1000000] * w)

    for j in range(w):
        if grid[i][j] == "*":
            dist[i][j] = 0

dr = [-1, 1, 0, 0]
dc = [0, 0, -1, 1]
changed = True

while changed:
    changed = False

    for i in range(1, h - 1):
        for j in range(1, w - 1):
            if grid[i][j] == "#":
                continue

            cost = 0

            if grid[i][j] == "D":
                cost = 1

            for d in range(4):
                if dist[i + dr[d]][j + dc[d]] + cost < dist[i][j]:
                    dist[i][j] = dist[i + dr[d]][j + dc[d]] + cost
                    changed = True

answer = 1000000

for i in range(h):
    for j in range(w):
        if grid[i][j] == "E" and dist[i][j] < answer:
            answer = dist[i][j]

if answer == 1000000:
    print("NOT POSSIBLE")
else:
    print(answer)

r, c = map(int, input().split())

map = []

for i in range(r):
    map.append(input())

spaces = [0] * 5

for i in range(r - 1):
    for j in range(c - 1):
        buildings = 0
        cars = 0

        for a in range(i, i + 2):
            for b in range(j, j + 2):
                if map[a][b] == "#":
                    buildings += 1
                elif map[a][b] == "X":
                    cars += 1

        if buildings == 0:
            spaces[cars] += 1

for i in range(5):
    print(spaces[i])

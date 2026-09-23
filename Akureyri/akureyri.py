N = int(input())

counts = {}

for i in range(N):
    name = input()
    location = input()

    if location in counts:
        counts[location] += 1
    else:
        counts[location] = 1

for location in counts:
    print(location, counts[location])

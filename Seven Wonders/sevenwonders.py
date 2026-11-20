cards = input()

tablets = 0
compasses = 0
gears = 0

for c in cards:
    if c == "T":
        tablets += 1
    elif c == "C":
        compasses += 1
    else:
        gears += 1

sets = min(tablets, compasses, gears)

print(tablets * tablets + compasses * compasses + gears * gears + 7 * sets)

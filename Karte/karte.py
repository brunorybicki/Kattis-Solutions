s = input()
suits = "PKHT"

seen = [[0] * 14 for i in range(4)]
count = [0] * 4
duplicate = False

for i in range(0, len(s), 3):
    suit = suits.index(s[i])
    number = int(s[i + 1:i + 3])

    if seen[suit][number]:
        duplicate = True

    seen[suit][number] = 1
    count[suit] += 1

if duplicate:
    print("GRESKA")
else:
    print(13 - count[0], 13 - count[1], 13 - count[2], 13 - count[3])

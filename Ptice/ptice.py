n = int(input())
answers = input()

names = ["Adrian", "Bruno", "Goran"]
patterns = ["ABC", "BABC", "CCAABB"]
score = [0] * 3
best = 0

for i in range(3):
    length = len(patterns[i])

    for j in range(n):
        if answers[j] == patterns[i][j % length]:
            score[i] += 1

    if score[i] > best:
        best = score[i]

print(best)

for i in range(3):
    if score[i] == best:
        print(names[i])

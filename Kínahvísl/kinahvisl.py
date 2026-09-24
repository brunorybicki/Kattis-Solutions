initialWord = input()
finalWord = input()

differences = 0

for i in range(len(initialWord)):
    if initialWord[i] != finalWord[i]:
        differences += 1

print(differences + 1)

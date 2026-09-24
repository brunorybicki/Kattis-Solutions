n = int(input())
words = input().split()

abbreviation = ""

for i in range(n):
    if words[i][0] >= 'A' and words[i][0] <= 'Z':
        abbreviation += words[i][0]

print(abbreviation)

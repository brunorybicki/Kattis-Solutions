words = input().split()

acronym = ""

for i in range(4):
    acronym += words[i][0]

if acronym == "ICPC":
    print(1)
else:
    print(0)

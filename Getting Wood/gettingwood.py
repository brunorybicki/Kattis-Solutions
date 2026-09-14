s = input()

for i in range(len(s) - 3):
    if s[i] == "t" and s[i + 1] == "r" and s[i + 2] == "e" and s[i + 3] == "e":
        print(i)
        break
else:
    print("no trees here")

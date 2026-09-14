found = []

for i in range(1, 6):
    line = input()

    if "FBI" in line:
        found.append(i)

if not found:
    print("HE GOT AWAY!")
else:
    for i in range(len(found)):
        print(found[i], end="")

        if i != len(found) - 1:
            print(" ", end="")

    print()

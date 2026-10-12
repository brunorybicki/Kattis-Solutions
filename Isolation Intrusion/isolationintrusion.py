n, m = int(input()), [int(input()) for i in range(3)]

for i in range(3):
    isolated = True

    for j in range(3):
        if j != i and m[i] + n >= m[j]:
            isolated = False

    if isolated:
        print(m[i] + n)
        exit()

print("impossible")

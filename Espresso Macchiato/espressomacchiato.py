t = int(input())

for test in range(t):
    n = int(input())

    for i in range(n):
        row = ""

        for j in range(n):
            if i + j == n - 1:
                row += "C"
            else:
                row += "."

        print(row)

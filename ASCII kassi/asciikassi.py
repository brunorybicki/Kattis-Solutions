n = int(input())

for i in range(n + 2):
    row = ""

    for j in range(n + 2):
        rowEdge = i == 0 or i == n + 1
        columnEdge = j == 0 or j == n + 1

        if rowEdge and columnEdge:
            row += "+"
        elif rowEdge:
            row += "-"
        elif columnEdge:
            row += "|"
        else:
            row += " "

    print(row)

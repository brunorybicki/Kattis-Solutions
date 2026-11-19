r, c, n = map(int, input().split())

board = [["."] * c for i in range(r)]

for i in range(n):
    a, b = map(int, input().split())

    board[a - 1][b - 1] = "*"

for i in range(r):
    print("".join(board[i]))

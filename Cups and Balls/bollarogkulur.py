ball = 1

for i in range(5):
    a = int(input())
    b = int(input())

    if ball == a:
        ball = b
    elif ball == b:
        ball = a

print(ball)

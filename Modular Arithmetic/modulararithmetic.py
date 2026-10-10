import math

while True:
    n, t = map(int, input().split())

    if n == 0 and t == 0:
        break

    for i in range(t):
        x, operator, y = input().split()
        x = int(x)
        y = int(y)

        if operator == "+":
            print((x + y) % n)
        elif operator == "-":
            print((x - y) % n)
        elif operator == "*":
            print(x * y % n)
        elif operator == "/":
            if math.gcd(y, n) != 1:
                print(-1)
            else:
                print(x * pow(y, -1, n) % n)

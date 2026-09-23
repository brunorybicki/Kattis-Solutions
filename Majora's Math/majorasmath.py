h, n = map(int, input().split())
a, b, c, d = map(int, input().split())

for i in range(n):
    arrowType = input()

    if arrowType == "standard":
        h -= a
    elif arrowType == "fire":
        h -= b
    elif arrowType == "ice":
        h -= c
    else:
        h -= d

if h <= 0:
    print("dead")
else:
    print(h)

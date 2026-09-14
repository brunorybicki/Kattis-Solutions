N = int(input())

for i in range(N):
    a, b, c = map(int, input().split())

    possible = False

    if a + b == c:
        possible = True
    elif a - b == c or b - a == c:
        possible = True
    elif a * b == c:
        possible = True
    elif b != 0 and a % b == 0 and a // b == c:
        possible = True
    elif a != 0 and b % a == 0 and b // a == c:
        possible = True

    if possible:
        print("Possible")
    else:
        print("Impossible")

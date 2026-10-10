import math

while True:
    p, a = map(int, input().split())

    if p == 0 or a == 0:
        break

    isPrime = not any(p % i == 0 for i in range(2, math.isqrt(p) + 1))
    isPseudoprime = False

    if not isPrime:
        isPseudoprime = pow(a, p, p) == a % p

    if isPseudoprime:
        print("yes")
    else:
        print("no")

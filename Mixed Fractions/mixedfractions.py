while True:
    numerator, denominator = map(int, input().split())

    if numerator == 0 and denominator == 0:
        break

    print(numerator // denominator, numerator % denominator, "/", denominator)

def fibonacci(n):
    a, b = 0, 1

    if n == 0:
        return a
    elif n == 1:
        return b

    for i in range(2, n + 1):
        c = a + b
        a = b
        b = c

    return b


def maximumFibonacci(n):
    i = 0

    while fibonacci(i + 1) <= n:
        i += 1

    return fibonacci(i)


n = int(input())

result = []

while n > 0:
    maximumFibonacciNumber = maximumFibonacci(n)
    result.append(maximumFibonacciNumber)
    n -= maximumFibonacciNumber

print(*reversed(result))

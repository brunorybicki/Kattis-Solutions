x = list(input())

n = len(x)
i = n - 2

while i >= 0 and x[i] >= x[i + 1]:
    i -= 1

if i < 0:
    print(0)
else:
    j = n - 1

    while x[j] <= x[i]:
        j -= 1

    x[i], x[j] = x[j], x[i]
    x[i + 1:] = x[i + 1:][::-1]

    print("".join(x))

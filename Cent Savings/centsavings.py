def roundingChange(remainder):
    if remainder < 5:
        return -remainder

    return 10 - remainder


n, d = map(int, input().split())
prices = list(map(int, input().split()))

remainders = [0]
total = 0

for i in range(n):
    total += prices[i]
    remainders.append(total % 10)

infinity = 1000000
dp = [[infinity] * (n + 1) for g in range(d + 2)]

dp[0][0] = 0

answer = infinity

for g in range(1, d + 2):
    best = [infinity] * 10

    for i in range(1, n + 1):
        if dp[g - 1][i - 1] < best[remainders[i - 1]]:
            best[remainders[i - 1]] = dp[g - 1][i - 1]

        for c in range(10):
            value = best[c] + roundingChange((remainders[i] - c + 10) % 10)

            if best[c] < infinity and value < dp[g][i]:
                dp[g][i] = value

    if dp[g][n] < answer:
        answer = dp[g][n]

print(total + answer)

#include <stdio.h>

int roundingChange(int remainder) {
    if (remainder < 5) {
        return -remainder;
    }

    return 10 - remainder;
}

int main() {
    int n, d;
    scanf("%d %d", &n, &d);

    int remainders[n + 1], total = 0;

    remainders[0] = 0;

    for (int i = 1; i <= n; i++) {
        int price;
        scanf("%d", &price);

        total += price;
        remainders[i] = total % 10;
    }

    int infinity = 1000000;
    int dp[d + 2][n + 1];

    for (int g = 0; g <= d + 1; g++) {
        for (int i = 0; i <= n; i++) {
            dp[g][i] = infinity;
        }
    }

    dp[0][0] = 0;

    int answer = infinity;

    for (int g = 1; g <= d + 1; g++) {
        int best[10];

        for (int c = 0; c < 10; c++) {
            best[c] = infinity;
        }

        for (int i = 1; i <= n; i++) {
            if (dp[g - 1][i - 1] < best[remainders[i - 1]]) {
                best[remainders[i - 1]] = dp[g - 1][i - 1];
            }

            for (int c = 0; c < 10; c++) {
                int value = best[c] + roundingChange((remainders[i] - c + 10) % 10);

                if (best[c] < infinity && value < dp[g][i]) {
                    dp[g][i] = value;
                }
            }
        }

        if (dp[g][n] < answer) {
            answer = dp[g][n];
        }
    }

    printf("%d\n", total + answer);

    return 0;
}

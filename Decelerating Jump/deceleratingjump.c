#include <stdio.h>

long long best[3005][3005];

int main() {
    int n;
    scanf("%d", &n);

    long long p[n + 1];

    for (int i = 1; i <= n; i++) {
        scanf("%lld", &p[i]);
    }

    long long negative = -4000000000000000000LL;

    for (int i = 1; i <= n; i++) {
        best[i][n + 1] = negative;

        for (int j = n; j >= 1; j--) {
            long long value = negative;

            if (i == 1) {
                value = p[1];
            } else if (j < i) {
                value = p[i] + best[i - j][j];
            }

            best[i][j] = value;

            if (best[i][j + 1] > best[i][j]) {
                best[i][j] = best[i][j + 1];
            }
        }
    }

    printf("%lld\n", best[n][1]);

    return 0;
}

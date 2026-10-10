#include <stdio.h>

long long extendedGcd(long long a, long long b, long long *x, long long *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;

        return a;
    }

    long long x1, y1, g = extendedGcd(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;

    return g;
}

int main() {
    long long n, t, x, y;
    char operator;

    while (scanf("%lld %lld", &n, &t) == 2 && !(n == 0 && t == 0)) {
        for (long long i = 0; i < t; i++) {
            scanf("%lld %c %lld", &x, &operator, &y);

            if (operator == '+') {
                printf("%lld\n", (x + y) % n);
            } else if (operator == '-') {
                printf("%lld\n", (x - y + n) % n);
            } else if (operator == '*') {
                printf("%lld\n", (long long)((__int128)x * y % n));
            } else if (operator == '/') {
                long long inverse, tmp;

                if (extendedGcd(y, n, &inverse, &tmp) != 1) {
                    printf("-1\n");
                } else {
                    inverse = (inverse % n + n) % n;

                    printf("%lld\n", (long long)((__int128)x * inverse % n));
                }
            }
        }
    }

    return 0;
}

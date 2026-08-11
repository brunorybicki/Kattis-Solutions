#include <stdio.h>

int main(void) {
    long long x, y;
    long long result = 0;

    scanf("%lld", &x);
    scanf("%lld", &y);

    for (long long i = 0; i < y; i++) {
        result += x;
    }

    printf("%lld\n", result);

    return 0;
}

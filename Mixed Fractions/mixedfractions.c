#include <stdio.h>

int main() {
    long long numerator, denominator;

    while (scanf("%lld %lld", &numerator, &denominator) == 2) {
        if (numerator == 0 && denominator == 0) {
            break;
        }

        printf("%lld %lld / %lld\n", numerator / denominator, numerator % denominator, denominator);
    }

    return 0;
}

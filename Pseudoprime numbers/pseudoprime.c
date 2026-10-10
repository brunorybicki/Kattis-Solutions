#include <stdio.h>

int main() {
    int p, a;

    while (scanf("%d %d", &p, &a) == 2 && p != 0 && a != 0) {
        int isPrime = 1, isPseudoprime = 0;

        for (int i = 2; i * i <= p; i++) {
            if (p % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (!isPrime) {
            long long result = 1, base = a;

            for (int i = p; i > 0; i /= 2) {
                if (i % 2 == 1) {
                    result = (result * base) % p;
                }

                base = (base * base) % p;
            }

            if (result == a % p) {
                isPseudoprime = 1;
            }
        }

        if (isPseudoprime) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}

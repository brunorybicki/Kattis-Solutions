#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("[");

    for (int i = 1; i <= n; i++) {
        long long square = (long long)i * i;

        printf("%lld", square);

        if (i < n) {
            printf(", ");
        }
    }

    printf("]\n");
    return 0;
}

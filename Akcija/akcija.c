#include <stdio.h>
#include <stdlib.h>

int compareValues(const void *a, const void *b) {
    const int *valueA = a;
    const int *valueB = b;

    if (*valueA < *valueB) {
        return -1;
    } else if (*valueA > *valueB) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int prices[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    qsort(prices, n, sizeof(int), compareValues);

    long long total = 0;

    for (int i = 0; i < n; i++) {
        if ((n - i) % 3 != 0) {
            total += prices[i];
        }
    }

    printf("%lld\n", total);

    return 0;
}

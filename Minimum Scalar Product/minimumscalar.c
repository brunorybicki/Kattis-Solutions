#include <stdio.h>
#include <stdlib.h>

int compareValuesBiggestToSmallest(const void *a, const void *b) {
    const int *valueA = a;
    const int *valueB = b;

    if (*valueA < *valueB) {
        return 1;
    } else if (*valueA > *valueB) {
        return -1;
    } else {
        return 0;
    }
}

int compareValuesSmallestToBiggest(const void *a, const void *b) {
    const int *valueA = a;
    const int *valueB = b;

    if (*valueA > *valueB) {
        return 1;
    } else if (*valueA < *valueB) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    long long T;
    scanf("%lld", &T);

    for (long long t = 0; t < T; t++) {
        long long N;
        scanf("%lld", &N);

        long long xi[200001], yi[200001];

        for (long long i = 0; i < N; i++) {
            scanf("%lld", &xi[i]);
        }

        qsort(xi, N, sizeof(long long), compareValuesBiggestToSmallest);

        for (long long i = 0; i < N; i++) {
            scanf("%lld", &yi[i]);
        }

        qsort(yi, N, sizeof(long long), compareValuesSmallestToBiggest);

        long long scalarProduct = 0;

        for (long long i = 0; i < N; i++) {
            scalarProduct += xi[i] * yi[i];
        }

        printf("Case #%lld: %lld\n", t + 1, scalarProduct);
    }
    
    return 0;
}

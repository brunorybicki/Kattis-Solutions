#include <stdio.h>
#include <stdlib.h>

int compareValues(const void *a, const void *b) {
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

int main() {
    int N;
    scanf("%d", &N);

    int t[1000001];

    for (int i = 0; i < N; i++) {
        scanf("%d", &t[i]);
    }
    
    qsort(t, N, sizeof(int), compareValues);

    int timeToGrow[1000001];
    
    for (int i = 0; i < N; i++) {
        timeToGrow[i] = (i + 1) + t[i];
    }

    int maximumTimeToGrow = 0;

    for (int i = 0; i < N; i++) {
        if (timeToGrow[i] > maximumTimeToGrow) {
            maximumTimeToGrow = timeToGrow[i];
        }
    }

    printf("%d\n", maximumTimeToGrow + 1);

    return 0;
}

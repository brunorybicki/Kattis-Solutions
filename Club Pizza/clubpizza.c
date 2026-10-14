#include <limits.h>
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
    int n, c;
    scanf("%d %d", &n, &c);

    int cheapest[24];

    for (int i = 0; i < 24; i++) {
        cheapest[i] = INT_MAX;
    }

    for (int i = 0; i < n; i++) {
        int t, p;
        scanf("%d %d", &t, &p);

        if (p < cheapest[t]) {
            cheapest[t] = p;
        }
    }

    qsort(cheapest, 24, sizeof(int), compareValues);

    int total = 0, clubs = 0;

    for (int i = 0; i < 24; i++) {
        if (cheapest[i] <= c - total) {
            total += cheapest[i];
            clubs++;
        } else {
            break;
        }
    }

    printf("%d\n", clubs);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int s, f;
} Interval;

int compareByValue(const void *a, const void *b) {
    const Interval *ia = a;
    const Interval *ib = b;

    if (ia->f < ib->f) {
        return -1;
    } else if (ia->f > ib->f) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Interval interval[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &interval[i].s, &interval[i].f);
    }

    qsort(interval, n, sizeof(Interval), compareByValue);

    int count = 0, lastFinish = -1;

    for (int i = 0; i < n; i++) {
        if (interval[i].s >= lastFinish) {
            count++;
            lastFinish = interval[i].f;
        }
    }

    printf("%d\n", count);

    return 0;
}

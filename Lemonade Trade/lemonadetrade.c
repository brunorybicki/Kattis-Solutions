#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareNames(const void *a, const void *b) {
    return strcmp(a, b);
}

int findName(char names[][11], int count, char *name) {
    int low = 0, high = count - 1;

    while (low < high) {
        int middle = (low + high) / 2;

        if (strcmp(names[middle], name) < 0) {
            low = middle + 1;
        } else {
            high = middle;
        }
    }

    return low;
}

int main() {
    int n;
    scanf("%d", &n);

    char (*offered)[11] = malloc(n * sizeof(*offered));
    char (*wanted)[11] = malloc(n * sizeof(*wanted));
    char (*names)[11] = malloc((2 * n + 2) * sizeof(*names));
    double *rate = malloc(n * sizeof(*rate));

    strcpy(names[0], "pink");
    strcpy(names[1], "blue");

    for (int i = 0; i < n; i++) {
        scanf("%s %s %lf", offered[i], wanted[i], &rate[i]);

        strcpy(names[2 * i + 2], offered[i]);
        strcpy(names[2 * i + 3], wanted[i]);
    }

    qsort(names, 2 * n + 2, 11, compareNames);

    int count = 0;

    for (int i = 0; i < 2 * n + 2; i++) {
        if (count == 0 || strcmp(names[i], names[count - 1]) != 0) {
            strcpy(names[count], names[i]);
            count++;
        }
    }

    double *logAmount = malloc(count * sizeof(*logAmount));

    for (int i = 0; i < count; i++) {
        logAmount[i] = -INFINITY;
    }

    logAmount[findName(names, count, "pink")] = 0;

    for (int i = 0; i < n; i++) {
        int o = findName(names, count, offered[i]), w = findName(names, count, wanted[i]);
        double value = logAmount[w] + log(rate[i]);

        if (value > logAmount[o]) {
            logAmount[o] = value;
        }
    }

    double blue = logAmount[findName(names, count, "blue")];

    if (blue > log(10)) {
        printf("%.15f\n", 10.0);
    } else {
        printf("%.15f\n", exp(blue));
    }

    free(offered);
    free(wanted);
    free(names);
    free(rate);
    free(logAmount);

    return 0;
}

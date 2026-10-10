#include <stdio.h>
#include <stdlib.h>

int find(int *parent, int x) {
    while (parent[x] != x) {
        parent[x] = parent[parent[x]];
        x = parent[x];
    }

    return x;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int *o = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &o[i]);
    }

    int *parent = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        parent[find(parent, a)] = find(parent, b);
    }

    int *sums = calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        sums[find(parent, i)] += o[i];
    }

    int possible = 1;

    for (int i = 0; i < n; i++) {
        if (sums[i] != 0) {
            possible = 0;
        }
    }

    if (possible) {
        printf("POSSIBLE\n");
    } else {
        printf("IMPOSSIBLE\n");
    }

    free(o);
    free(parent);
    free(sums);

    return 0;
}

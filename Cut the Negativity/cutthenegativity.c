#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int m = 0, u[10000], v[10000], cost[10000];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int c;
            scanf("%d", &c);

            if (c != -1) {
                u[m] = i + 1;
                v[m] = j + 1;
                cost[m] = c;
                m++;
            }
        }
    }

    printf("%d\n", m);

    for (int k = 0; k < m; k++) {
        printf("%d %d %d\n", u[k], v[k], cost[k]);
    }

    return 0;
}

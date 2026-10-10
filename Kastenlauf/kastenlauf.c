#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int x[102], y[102], reach[102][102];

        for (int i = 0; i < n + 2; i++) {
            scanf("%d %d", &x[i], &y[i]);
        }

        for (int i = 0; i < n + 2; i++) {
            for (int j = 0; j < n + 2; j++) {
                reach[i][j] = abs(x[i] - x[j]) + abs(y[i] - y[j]);
            }
        }


        for (int k = 0; k < n + 2; k++) {
            for (int i = 0; i < n + 2; i++) {
                for (int j = 0; j < n + 2; j++) {
                    if (reach[i][k] <= 1000 && reach[k][j] <= 1000) {
                        reach[i][j] = 1;
                    }
                }
            }
        }

        if (reach[0][n + 1] <= 1000) {
            printf("happy\n");
        } else {
            printf("sad\n");
        }
    }

    return 0;
}

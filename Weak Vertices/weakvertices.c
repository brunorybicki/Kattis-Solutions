#include <stdio.h>

int main() {
    int n;
    int graph[20][20];

    while (1) {
        scanf("%d", &n);

        if (n == -1) {
            break;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &graph[i][j]);
            }
        }

        for (int i = 0; i < n; i++) {
            int inTriangle = 0;

            for (int j = 0; j < n && !inTriangle; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (graph[i][j] == 1 &&
                        graph[i][k] == 1 &&
                        graph[j][k] == 1) {
                        inTriangle = 1;
                        break;
                    }
                }
            }

            if (!inTriangle) {
                printf("%d ", i);
            }
        }

        printf("\n");
    }

    return 0;
}

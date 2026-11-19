#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int test = 0; test < t; test++) {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1) {
                    printf("C");
                } else {
                    printf(".");
                }
            }

            printf("\n");
        }
    }

    return 0;
}

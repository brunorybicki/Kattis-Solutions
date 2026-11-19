#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int test = 0; test < t; test++) {
        int n;
        scanf("%d", &n);

        int used[4] = {0}, count = 0;

        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);

            used[(a - 1) / 10] = 1;
        }

        for (int i = 0; i < 4; i++) {
            if (used[i]) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

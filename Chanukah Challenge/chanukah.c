#include <stdio.h>

int main() {
    int P;
    scanf("%d", &P);

    for (int i = 0; i < P; i++) {
        int K, N;
        scanf("%d %d", &K, &N);

        printf("%d %d\n", K, N * (N + 1) / 2 + N);
    }

    return 0;
}

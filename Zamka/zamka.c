#include <stdio.h>

int main() {
    int L, D, X;
    scanf("%d", &L);
    scanf("%d", &D);
    scanf("%d", &X);

    int N = 0;

    for (int i = L; i <= D; i++) {
        if (i % 10 + (i / 10) % 10 + (i / 100) % 10 + (i / 1000) % 10 + (i / 10000) % 10 == X) {
            N = i;
            break;
        }
    }

    int M = 0;

    for (int i = D; i >= L; i--) {
        if (i % 10 + (i / 10) % 10 + (i / 100) % 10 + (i / 1000) % 10 + (i / 10000) % 10 == X) {
            M = i;
            break;
        }
    }

    printf("%d\n", N);
    printf("%d\n", M);

    return 0;
}

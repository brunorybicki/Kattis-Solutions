#include <stdio.h>

int main() {
    int X, N;
    scanf("%d", &X);
    scanf("%d", &N);

    int value = X * (N + 1);

    for (int i = 0; i < N; i++) {
        int Pi;
        scanf("%d", &Pi);
        
        value -= Pi;
    }

    printf("%d", value);
    return 0;
}

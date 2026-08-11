#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int sum = 0;

    for (int i = 0; i < N; i++) {
        int P;
        scanf("%d", &P);

        int base = P / 10;
        int exponent = P % 10;

        int value = 1;

        for (int j = 0; j < exponent; j++) {
            value *= base;
        }

        sum += value;
    }

    printf("%d\n", sum);
    return 0;
}

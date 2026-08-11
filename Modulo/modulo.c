#include <stdio.h>

int main() {
    int remainders[42] = {0};
    int number;
    int distinct = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &number);
        int remainder = number % 42;

        if (remainders[remainder] == 0) {
            remainders[remainder] = 1;
            distinct++;
        }
    }

    printf("%d", distinct);
    return 0;
}

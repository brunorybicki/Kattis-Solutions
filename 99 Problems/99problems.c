#include <stdio.h>

int main() {
    int price;
    scanf("%d", &price);

    int upper = ((price / 100) * 100) + 99;
    int lower = ((price / 100) * 100) - 1;

    if (lower < 1) {
        printf("%d", upper);
    } else if ((price - lower) < (upper - price)) {
        printf("%d", lower);
    } else {
        printf("%d", upper);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);

    if (y <= 2020) {
        printf("1000\n");
    } else {
        printf("%d\n", ((y - 2020) * 100) + 1000);
    }

    return 0;
}

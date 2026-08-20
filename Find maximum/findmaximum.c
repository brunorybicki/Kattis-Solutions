#include <stdio.h>

int main() {
    int integer1, integer2, integer3;
    scanf("%d", &integer1);
    scanf("%d", &integer2);
    scanf("%d", &integer3);

    int max = integer1;

    if (integer2 > max) {
        max = integer2;
    }

    if (integer3 > max) {
        max = integer3;
    }

    printf("%d", max);
    return 0;
}

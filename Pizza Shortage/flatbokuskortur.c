#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    int bigSize = x * x, smallSize = y * y;

    if (smallSize * z >= bigSize) {
        printf("Jebb\n");
    } else {
        printf("Neibb\n");
    }

    return 0;
}

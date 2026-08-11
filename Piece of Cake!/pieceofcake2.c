#include <stdio.h>

int main() {
    int n, h, v;
    scanf("%d %d %d", &n, &h, &v);

    int horizontalSide, verticalSide;

    if (h > n - h) {
        horizontalSide = h;
    } else {
        horizontalSide = n - h;
    }

    if (v > n - v) {
        verticalSide = v;
    } else {
        verticalSide = n - v;
    }

    printf("%d", horizontalSide * verticalSide * 4);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    int h, n;
    scanf("%d %d", &h, &n);

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    for (int i = 0; i < n; i++) {
        char arrowType[9];
        scanf("%s", arrowType);

        if (strcmp(arrowType, "standard") == 0) {
            h -= a;
        } else if (strcmp(arrowType, "fire") == 0) {
            h -= b;
        } else if (strcmp(arrowType, "ice") == 0) {
            h -= c;
        } else {
            h -= d;
        }
    }

    if (h <= 0) {
        printf("dead\n");
    } else {
        printf("%d\n", h);
    }

    return 0;
}

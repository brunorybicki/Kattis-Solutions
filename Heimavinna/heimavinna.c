#include <stdio.h>

int main() {
    int a, b, count = 0;

    while (scanf("%d", &a) == 1) {
        count++;

        if (getchar() == '-') {
            scanf("%d", &b);
            count += b - a;
            getchar();
        }
    }

    printf("%d\n", count);

    return 0;
}

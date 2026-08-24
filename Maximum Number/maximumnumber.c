#include <stdio.h>

int main() {
    int a, highest = 0;

    while (scanf("%d", &a) == 1 && a >= 0) {
        if (a > highest) {
            highest = a;
        }
    }

    printf("%d", highest);
    return 0;
}

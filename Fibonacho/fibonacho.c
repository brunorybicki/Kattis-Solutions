#include <stdio.h>

int main() {
    int a3, a4, a5;
    scanf("%d %d %d", &a3, &a4, &a5);

    int a2 = a5 - a4, a1 = a4 - a3, a0 = a3 - a2;

    printf("%d %d %d\n", a0, a1, a2);

    return 0;
}

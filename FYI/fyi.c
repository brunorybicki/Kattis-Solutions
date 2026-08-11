#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n / 10000 == 555) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

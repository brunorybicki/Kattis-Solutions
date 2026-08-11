#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int printers = 1;
    int days = 0;

    while (printers < n) {
        printers *= 2;
        days++;
    }

    printf("%d\n", days + 1);
    return 0;
}
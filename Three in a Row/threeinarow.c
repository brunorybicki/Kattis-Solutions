#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long x = 1;
    int count = 0;

    while (x * (x + 1) * (x + 2) < n) {
        count++;
        x++;
    }

    printf("%d\n", count);

    return 0;
}

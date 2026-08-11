#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int numOfSquirrels = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            numOfSquirrels++;
        }

        n /= 2;
    }

    printf("%d", numOfSquirrels);
    return 0;
}

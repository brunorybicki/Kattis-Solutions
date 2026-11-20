#include <stdio.h>
#include <string.h>

int main() {
    char key[1005];
    scanf("%s", key);

    int zoom = strlen(key);
    long long x = 0, y = 0;

    for (int i = 0; i < zoom; i++) {
        int digit = key[i] - '0';

        x = 2 * x + digit % 2;
        y = 2 * y + digit / 2;
    }

    printf("%d %lld %lld\n", zoom, x, y);

    return 0;
}

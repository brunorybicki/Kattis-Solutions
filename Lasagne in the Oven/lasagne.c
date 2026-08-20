#include <stdio.h>
#include <math.h>

int main() {
    int f;
    scanf("%d", &f);

    int c = (int) round((f - 32) * 5.0 / 9.0);
    printf("%d", c);

    return 0;
}

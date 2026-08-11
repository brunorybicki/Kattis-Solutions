#include <stdio.h>

int main() {
    int v, a, t;
    scanf("%d %d %d", &v, &a, &t);

    double d = v * t + 0.5 * a * t * t;
    printf("%.8f\n", d);

    return 0;
}
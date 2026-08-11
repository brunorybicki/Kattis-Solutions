#include <stdio.h>

int main() {
    int n, h, x, m, y;
    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%d", &x);
    scanf("%d", &m);
    scanf("%d", &y);

    double time = (double) n * h * y / (m * x);
    printf("%f\n", time);

    return 0;
}
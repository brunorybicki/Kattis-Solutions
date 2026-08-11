#include <stdio.h>

int main() {
    int h, b;
    scanf("%d %d", &h, &b);

    double area = 0.5 * h * b;
    printf("%.10f", area);

    return 0;
}
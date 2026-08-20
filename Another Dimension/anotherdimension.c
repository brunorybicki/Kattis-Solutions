#include <stdio.h>
#include <math.h>

int main() {
    double d;
    scanf("%lf", &d);

    double volume = 2.0 / 3.0 * acos(-1.0) * pow(d / 2.0, 3);
    printf("%.14f", volume);

    return 0;
}

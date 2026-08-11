#include <stdio.h>

int main() {
    double cost;
    int lawns;
    double total = 0;

    scanf("%lf", &cost);
    scanf("%d", &lawns);

    for (int i = 0; i < lawns; i++) {
        double width, length;
        scanf("%lf %lf", &width, &length);

        total += width * length * cost;
    }

    printf("%lf\n", total);
    return 0;
}

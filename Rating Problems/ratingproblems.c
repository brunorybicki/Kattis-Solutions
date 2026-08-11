#include <stdio.h>

int main() {
    int n, k, r;
    int sum = 0;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < k; i++) {
        scanf("%d", &r);
        sum += r;
    }

    double min = (double)(sum - (n - k) * 3) / n;
    double max = (double)(sum + (n - k) * 3) / n;

    printf("%f %f", min, max);
    return 0;
}

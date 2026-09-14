#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int hours[24] = {0};

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        for (int h = a; h < b; h++) {
            hours[h]++;
        }
    }

    int count = 0;

    for (int h = 0; h < 24; h++) {
        if (hours[h] >= k) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

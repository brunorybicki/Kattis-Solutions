#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);

    for (int i = 0; i < p; i++) {
        int k;
        long long n;
        scanf("%d %lld", &k, &n);

        printf("%d %lld %lld %lld\n", k, n * (n + 1) / 2, n * n, n * (n + 1));
    }

    return 0;
}

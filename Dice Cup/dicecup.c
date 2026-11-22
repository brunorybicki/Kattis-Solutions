#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int low = n, high = m;

    if (m < n) {
        low = m;
        high = n;
    }

    for (int i = low + 1; i <= high + 1; i++) {
        printf("%d\n", i);
    }

    return 0;
}

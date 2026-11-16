#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    long long total = 0;

    for (int i = 0; i < m; i++) {
        int bill;
        scanf("%d", &bill);
        
        total += bill;
    }

    if (total % n == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

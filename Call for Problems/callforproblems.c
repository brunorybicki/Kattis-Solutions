#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int excluded = 0;

    for (int i = 1; i <= n; i++) {
        int d;
        scanf("%d", &d);

        if (d % 2 != 0) {
            excluded++;
        }
    }

    printf("%d", excluded);
    return 0;
}

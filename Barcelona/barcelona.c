#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int bag;
    int position = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &bag);

        if (bag == k) {
            position = i + 1;
        }
    }

    if (position == 1) {
        printf("fyrst");
    } else if (position == 2) {
        printf("naestfyrst");
    } else {
        printf("%d fyrst", position);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int previous, boxes = 0;
    scanf("%d", &previous);

    for (int i = 1; i < n; i++) {
        int current;
        scanf("%d", &current);

        if (current > previous) {
            boxes++;
        }

        previous = current;
    }

    printf("%d\n", boxes);

    return 0;
}

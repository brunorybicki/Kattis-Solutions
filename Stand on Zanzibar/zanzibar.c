#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int imported = 0, previous, current;
        scanf("%d", &previous);
        scanf("%d", &current);

        while (current != 0) {
            if (current > 2 * previous) {
                imported += current - 2 * previous;
            }

            previous = current;

            scanf("%d", &current);
        }

        printf("%d\n", imported);
    }

    return 0;
}

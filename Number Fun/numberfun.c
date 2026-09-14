#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int possible = 0;

        if (a + b == c) {
            possible = 1;
        } else if (a - b == c || b - a == c) {
            possible = 1;
        } else if (a * b == c) {
            possible = 1;
        } else if (b != 0 && a % b == 0 && a / b == c) {
            possible = 1;
        } else if (a != 0 && b % a == 0 && b / a == c) {
            possible = 1;
        }

        if (possible) {
            printf("Possible\n");
        } else {
            printf("Impossible\n");
        }
    }

    return 0;
}

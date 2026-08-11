#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int distance;
    int possibilities = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &distance);

        if (distance <= 7) {
            possibilities += distance - 1;
        } else {
            possibilities += 13 - distance;
        }
    }

    printf("%f", possibilities / 36.0);
    return 0;
}

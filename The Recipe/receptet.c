#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int totalCost = 0;

    for (int i = 0; i < N; i++) {
        int H, B, K;
        scanf("%d %d %d", &H, &B, &K);

        if (H < B) {
            totalCost += (B - H) * K;
        }
    }

    printf("%d", totalCost);
    return 0;
}

#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int counts[7] = {0};

    for (int i = 0; i < N; i++) {
        int t;
        scanf("%d", &t);
        
        counts[t]++;
    }

    int maxCount = 0;

    for (int i = 1; i <= 6; i++) {
        if (counts[i] > maxCount) {
            maxCount = counts[i];
        }
    }

    if (N - maxCount <= M) {
        printf("Ja\n");
    } else {
        printf("Nej\n");
    }

    return 0;
}

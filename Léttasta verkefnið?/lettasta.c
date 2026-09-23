#include <stdio.h>

int main() {
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    char names[12][101];

    for (int i = 0; i < N; i++) {
        scanf("%s", names[i]);
    }

    int totals[12] = {0};

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int points;
            scanf("%d", &points);
            
            totals[j] += points;
        }
    }

    int best = 0;

    for (int j = 1; j < N; j++) {
        if (totals[j] > totals[best]) {
            best = j;
        }
    }

    printf("%s\n", names[best]);
    return 0;
}

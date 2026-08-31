#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int t[1000];

    for (int i = 0; i < N; i++) {
        scanf("%d", &t[i]);
    }

    int display = 0;

    for (int i = 0; i + 1 < N; i += 2) {
        display += t[i + 1] - t[i];
    }

    if (N % 2 == 0) {
        printf("%d", display);
    } else {
        printf("still running");
    }

    return 0;
}

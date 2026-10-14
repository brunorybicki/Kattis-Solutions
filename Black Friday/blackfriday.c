#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n], count[7] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        count[a[i]]++;
    }

    int winner = -1, best = -1;

    for (int i = 0; i < n; i++) {
        if (count[a[i]] == 1 && a[i] > best) {
            best = a[i];
            winner = i + 1;
        }
    }

    if (winner == -1) {
        printf("none\n");
    } else {
        printf("%d\n", winner);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int x1[101];

    for (int i = 0; i < n; i++) {
        scanf("%d", &x1[i]);
    }

    int x2[101];

    for (int j = 0; j < m; j++) {
        scanf("%d", &x2[j]);
    }

    int identical[101] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (x1[i] == x2[j]) {
                identical[i] = 1;
            }
        } 
    }

    for (int i = 0; i < n; i++) {
        if (identical[i]) {
            printf("%d ", x1[i]);
        }
    }

    return 0;
}

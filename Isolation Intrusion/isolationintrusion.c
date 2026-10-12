#include <stdio.h>

int main() {
    int n, m[3];
    scanf("%d", &n);

    for (int i = 0; i < 3; i++) {
        scanf("%d", &m[i]);
    }

    for (int i = 0; i < 3; i++) {
        int isolated = 1;

        for (int j = 0; j < 3; j++) {
            if (j != i && m[i] + n >= m[j]) {
                isolated = 0;
            }
        }

        if (isolated) {
            printf("%d\n", m[i] + n);
            
            return 0;
        }
    }

    printf("impossible\n");

    return 0;
}

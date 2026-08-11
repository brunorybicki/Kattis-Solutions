#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char grid[n][m + 1];

    for (int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
    }

    int mines = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                mines++;
            }
        }
    }

    printf("%d\n", mines);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') {
                printf("%d %d\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}

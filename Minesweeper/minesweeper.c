#include <stdio.h>

int main() {
    int r, c, n;
    scanf("%d %d %d", &r, &c, &n);

    char board[r][c + 1];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            board[i][j] = '.';
        }

        board[i][c] = '\0';
    }

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        board[a - 1][b - 1] = '*';
    }

    for (int i = 0; i < r; i++) {
        printf("%s\n", board[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    char map[r][c + 1];

    for (int i = 0; i < r; i++) {
        scanf("%s", map[i]);
    }

    int spaces[5] = {0};

    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < c - 1; j++) {
            int buildings = 0, cars = 0;

            for (int a = i; a <= i + 1; a++) {
                for (int b = j; b <= j + 1; b++) {
                    if (map[a][b] == '#') {
                        buildings++;
                    } else if (map[a][b] == 'X') {
                        cars++;
                    }
                }
            }

            if (buildings == 0) {
                spaces[cars]++;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", spaces[i]);
    }

    return 0;
}

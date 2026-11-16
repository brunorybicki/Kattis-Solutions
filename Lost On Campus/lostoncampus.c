#include <stdio.h>

int main() {
    int w, h;
    scanf("%d %d", &w, &h);

    char grid[100][101];
    int dist[100][100];

    for (int i = 0; i < h; i++) {
        scanf("%s", grid[i]);

        for (int j = 0; j < w; j++) {
            dist[i][j] = 1000000;

            if (grid[i][j] == '*') {
                dist[i][j] = 0;
            }
        }
    }

    int dr[4] = {-1, 1, 0, 0}, dc[4] = {0, 0, -1, 1};
    int changed = 1;

    while (changed) {
        changed = 0;

        for (int i = 1; i < h - 1; i++) {
            for (int j = 1; j < w - 1; j++) {
                if (grid[i][j] == '#') {
                    continue;
                }

                int cost = 0;

                if (grid[i][j] == 'D') {
                    cost = 1;
                }

                for (int d = 0; d < 4; d++) {
                    if (dist[i + dr[d]][j + dc[d]] + cost < dist[i][j]) {
                        dist[i][j] = dist[i + dr[d]][j + dc[d]] + cost;
                        changed = 1;
                    }
                }
            }
        }
    }

    int answer = 1000000;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == 'E' && dist[i][j] < answer) {
                answer = dist[i][j];
            }
        }
    }

    if (answer == 1000000) {
        printf("NOT POSSIBLE\n");
    } else {
        printf("%d\n", answer);
    }

    return 0;
}

#include <iostream>
#include <string>
#include <vector>

int main() {
    int w, h;
    std::cin >> w >> h;

    std::vector<std::string> grid(h);
    std::vector<std::vector<int>> dist(h, std::vector<int>(w, 1000000));

    for (int i = 0; i < h; i++) {
        std::cin >> grid[i];

        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '*') {
                dist[i][j] = 0;
            }
        }
    }

    int dr[4] = {-1, 1, 0, 0}, dc[4] = {0, 0, -1, 1};
    bool changed = true;

    while (changed) {
        changed = false;

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
                        changed = true;
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
        std::cout << "NOT POSSIBLE\n";
    } else {
        std::cout << answer << "\n";
    }

    return 0;
}

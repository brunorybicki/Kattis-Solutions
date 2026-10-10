#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    int C;
    std::cin >> C;

    std::vector<int> low(2001, 1001), high(2001, -1001);

    for (int i = 0; i < C; i++) {
        int x, y;
        std::cin >> x >> y;

        low[x + 1000] = std::min(low[x + 1000], y);
        high[x + 1000] = std::max(high[x + 1000], y);
    }

    std::vector<int> cx, cy;

    for (int i = 0; i < 2001; i++) {
        if (low[i] != 1001) {
            cx.push_back(i - 1000);
            cy.push_back(low[i]);

            cx.push_back(i - 1000);
            cy.push_back(high[i]);
        }
    }

    int count = cx.size(), best = 0;

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            int dx = cx[i] - cx[j], dy = cy[i] - cy[j];

            best = std::max(best, dx * dx + dy * dy);
        }
    }

    printf("%.9f\n", std::sqrt(best));

    return 0;
}

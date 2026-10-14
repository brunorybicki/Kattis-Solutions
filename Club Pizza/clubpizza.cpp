#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

int main() {
    int n, c;
    std::cin >> n >> c;

    std::vector<int> cheapest(24, INT_MAX);

    for (int i = 0; i < n; i++) {
        int t, p;
        std::cin >> t >> p;

        cheapest[t] = std::min(cheapest[t], p);
    }

    std::sort(cheapest.begin(), cheapest.end());

    int total = 0, clubs = 0;

    for (int i = 0; i < 24; i++) {
        if (cheapest[i] <= c - total) {
            total += cheapest[i];
            clubs++;
        } else {
            break;
        }
    }

    std::cout << clubs << "\n";

    return 0;
}

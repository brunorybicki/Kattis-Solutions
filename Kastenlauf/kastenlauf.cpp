#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> x(n + 2), y(n + 2);

        for (int i = 0; i < n + 2; i++) {
            std::cin >> x[i] >> y[i];
        }

        std::vector<std::vector<int>> reach(n + 2, std::vector<int>(n + 2));

        for (int i = 0; i < n + 2; i++) {
            for (int j = 0; j < n + 2; j++) {
                reach[i][j] = std::abs(x[i] - x[j]) + std::abs(y[i] - y[j]);
            }
        }

        for (int k = 0; k < n + 2; k++) {
            for (int i = 0; i < n + 2; i++) {
                for (int j = 0; j < n + 2; j++) {
                    if (reach[i][k] <= 1000 && reach[k][j] <= 1000) {
                        reach[i][j] = 1;
                    }
                }
            }
        }

        if (reach[0][n + 1] <= 1000) {
            std::cout << "happy\n";
        } else {
            std::cout << "sad\n";
        }
    }

    return 0;
}

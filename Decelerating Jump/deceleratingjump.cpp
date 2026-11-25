#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<long long> p(n + 1);

    for (int i = 1; i <= n; i++) {
        std::cin >> p[i];
    }

    long long negative = -4000000000000000000LL;
    std::vector<std::vector<long long>> best(n + 1, std::vector<long long>(n + 2));

    for (int i = 1; i <= n; i++) {
        best[i][n + 1] = negative;

        for (int j = n; j >= 1; j--) {
            long long value = negative;

            if (i == 1) {
                value = p[1];
            } else if (j < i) {
                value = p[i] + best[i - j][j];
            }

            best[i][j] = value;

            if (best[i][j + 1] > best[i][j]) {
                best[i][j] = best[i][j + 1];
            }
        }
    }

    std::cout << best[n][1] << "\n";

    return 0;
}

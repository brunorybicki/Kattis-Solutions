#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<long long> ways(n + 1);
    ways[0] = 1;

    for (int i = 1; i <= n; i++) {
        ways[i] = ways[i - 1];

        if (i >= 2) {
            ways[i] += ways[i - 2];
        }

        if (i >= 3) {
            ways[i] += ways[i - 3];
        }
    }

    std::cout << ways[n] << "\n";

    return 0;
}

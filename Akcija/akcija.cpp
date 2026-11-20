#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    std::sort(prices.begin(), prices.end());

    long long total = 0;

    for (int i = 0; i < n; i++) {
        if ((n - i) % 3 != 0) {
            total += prices[i];
        }
    }

    std::cout << total << "\n";

    return 0;
}

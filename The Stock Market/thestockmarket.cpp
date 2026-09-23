#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    int k;
    std::cin >> k;

    std::vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    int maxProfit = prices[k] - prices[0];

    for (int i = 1; i + k < n; i++) {
        if (prices[i + k] - prices[i] > maxProfit) {
            maxProfit = prices[i + k] - prices[i];
        }
    }

    std::cout << maxProfit << '\n';
    return 0;
}

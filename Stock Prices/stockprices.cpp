#include <iostream>
#include <string>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    for (int test = 0; test < t; test++) {
        int n;
        std::cin >> n;

        std::vector<int> buyPrice, buyShares, sellPrice, sellShares;
        int stock = -1;

        for (int i = 0; i < n; i++) {
            std::string type, word, at;
            int x, y;
            std::cin >> type >> x >> word >> at >> y;

            if (type == "buy") {
                buyPrice.push_back(y);
                buyShares.push_back(x);
            } else {
                sellPrice.push_back(y);
                sellShares.push_back(x);
            }

            int bid, ask;

            while (true) {
                bid = -1;
                ask = -1;

                for (int j = 0; j < buyPrice.size(); j++) {
                    if (buyShares[j] > 0 && (bid == -1 || buyPrice[j] > buyPrice[bid])) {
                        bid = j;
                    }
                }

                for (int j = 0; j < sellPrice.size(); j++) {
                    if (sellShares[j] > 0 && (ask == -1 || sellPrice[j] < sellPrice[ask])) {
                        ask = j;
                    }
                }

                if (bid == -1 || ask == -1 || buyPrice[bid] < sellPrice[ask]) {
                    break;
                }

                int shares = buyShares[bid];

                if (sellShares[ask] < shares) {
                    shares = sellShares[ask];
                }

                buyShares[bid] -= shares;
                sellShares[ask] -= shares;
                stock = sellPrice[ask];
            }

            if (ask == -1) {
                std::cout << "- ";
            } else {
                std::cout << sellPrice[ask] << " ";
            }

            if (bid == -1) {
                std::cout << "- ";
            } else {
                std::cout << buyPrice[bid] << " ";
            }

            if (stock == -1) {
                std::cout << "-\n";
            } else {
                std::cout << stock << "\n";
            }
        }
    }

    return 0;
}

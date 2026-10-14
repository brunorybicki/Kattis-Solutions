#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n), count(7, 0);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        count[a[i]]++;
    }

    int winner = -1, best = -1;

    for (int i = 0; i < n; i++) {
        if (count[a[i]] == 1 && a[i] > best) {
            best = a[i];
            winner = i + 1;
        }
    }

    if (winner == -1) {
        std::cout << "none\n";
    } else {
        std::cout << winner << "\n";
    }

    return 0;
}

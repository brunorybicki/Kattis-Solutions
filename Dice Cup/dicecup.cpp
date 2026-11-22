#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int low = n, high = m;

    if (m < n) {
        low = m;
        high = n;
    }

    for (int i = low + 1; i <= high + 1; i++) {
        std::cout << i << "\n";
    }

    return 0;
}

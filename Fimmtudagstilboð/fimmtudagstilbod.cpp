#include <iostream>

int main() {
    int y;
    std::cin >> y;

    if (y <= 2020) {
        std::cout << 1000 << '\n';
    } else {
        std::cout << ((y - 2020) * 100) + 1000 << '\n';
    }

    return 0;
}

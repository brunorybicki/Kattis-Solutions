#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << 2 << '\n';
    } else {
        std::cout << 3 << '\n';
    }

    return 0;
}

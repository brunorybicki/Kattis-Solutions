#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;

        std::cout << "s" + std::string(n + 1, 'h') << "\n";
    }

    return 0;
}

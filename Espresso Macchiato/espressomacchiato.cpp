#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int test = 0; test < t; test++) {
        int n;
        std::cin >> n;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1) {
                    std::cout << "C";
                } else {
                    std::cout << ".";
                }
            }

            std::cout << "\n";
        }
    }

    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    long long total = 0;

    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;

        total += a;
    }

    std::cout << total << "\n";

    return 0;
}

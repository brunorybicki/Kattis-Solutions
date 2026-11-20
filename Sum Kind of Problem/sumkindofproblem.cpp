#include <iostream>

int main() {
    int p;
    std::cin >> p;

    for (int i = 0; i < p; i++) {
        int k;
        long long n;
        std::cin >> k >> n;

        std::cout << k << " " << n * (n + 1) / 2 << " " << n * n << " " << n * (n + 1) << "\n";
    }

    return 0;
}

#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    long long total = 0;

    for (int i = 0; i < m; i++) {
        int bill;
        std::cin >> bill;
        
        total += bill;
    }

    if (total % n == 0) {
        std::cout << "1\n";
    } else {
        std::cout << "0\n";
    }

    return 0;
}

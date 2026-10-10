#include <iostream>

long long extendedGcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;

        return a;
    }

    long long x1, y1, g = extendedGcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;

    return g;
}

int main() {
    long long n, t, x, y;
    char operation;

    while (std::cin >> n >> t && !(n == 0 && t == 0)) {
        for (long long i = 0; i < t; i++) {
            std::cin >> x >> operation >> y;

            if (operation == '+') {
                std::cout << (x + y) % n << "\n";
            } else if (operation == '-') {
                std::cout << (x - y + n) % n << "\n";
            } else if (operation == '*') {
                std::cout << (long long)((__int128)x * y % n) << "\n";
            } else if (operation == '/') {
                long long inverse, tmp;

                if (extendedGcd(y, n, inverse, tmp) != 1) {
                    std::cout << -1 << "\n";
                } else {
                    inverse = (inverse % n + n) % n;

                    std::cout << (long long)((__int128)x * inverse % n) << "\n";
                }
            }
        }
    }

    return 0;
}

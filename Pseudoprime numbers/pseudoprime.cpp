#include <iostream>

int main() {
    int p, a;

    while (std::cin >> p >> a && p != 0 && a != 0) {
        bool isPrime = true, isPseudoprime = false;

        for (int i = 2; (long long)i * i <= p; i++) {
            if (p % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (!isPrime) {
            long long result = 1, base = a;

            for (int i = p; i > 0; i /= 2) {
                if (i % 2 == 1) {
                    result = (result * base) % p;
                }

                base = (base * base) % p;
            }

            if (result == a % p) {
                isPseudoprime = true;
            }
        }

        if (isPseudoprime) {
            std::cout << "yes\n";
        } else {
            std::cout << "no\n";
        }
    }

    return 0;
}

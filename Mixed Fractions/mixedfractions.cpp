#include <iostream>

int main() {
    long long numerator, denominator;

    while (std::cin >> numerator >> denominator) {
        if (numerator == 0 && denominator == 0) {
            break;
        }

        std::cout << numerator / denominator << " " << numerator % denominator << " / " << denominator << "\n";
    }

    return 0;
}

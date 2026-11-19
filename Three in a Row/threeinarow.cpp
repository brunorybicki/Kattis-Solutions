#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    long long x = 1;
    int count = 0;

    while (x * (x + 1) * (x + 2) < n) {
        count++;
        x++;
    }

    std::cout << count << "\n";

    return 0;
}

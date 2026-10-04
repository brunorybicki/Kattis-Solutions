#include <iostream>

int main() {
    int a, b, count = 0;

    while (std::cin >> a) {
        count++;

        if (std::cin.get() == '-') {
            std::cin >> b;
            count += b - a;
            std::cin.get();
        }
    }

    std::cout << count << "\n";

    return 0;
}

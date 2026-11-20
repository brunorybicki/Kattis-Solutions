#include <iostream>
#include <string>

int main() {
    std::string key;
    std::cin >> key;

    int zoom = key.size();
    long long x = 0, y = 0;

    for (int i = 0; i < zoom; i++) {
        int digit = key[i] - '0';

        x = 2 * x + digit % 2;
        y = 2 * y + digit / 2;
    }

    std::cout << zoom << " " << x << " " << y << "\n";

    return 0;
}

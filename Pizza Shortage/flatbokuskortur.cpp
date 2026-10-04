#include <iostream>

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;

    int bigSize = x * x, smallSize = y * y;

    if (smallSize * z >= bigSize) {
        std::cout << "Jebb\n";
    } else {
        std::cout << "Neibb\n";
    }

    return 0;
}

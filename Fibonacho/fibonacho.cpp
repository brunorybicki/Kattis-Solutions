#include <iostream>

int main() {
    int a3, a4, a5;
    std::cin >> a3 >> a4 >> a5;

    int a2 = a5 - a4, a1 = a4 - a3, a0 = a3 - a2;

    std::cout << a0 << " " << a1 << " " << a2 << "\n";

    return 0;
}

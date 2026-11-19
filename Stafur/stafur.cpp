#include <iostream>

int main() {
    char letter;
    std::cin >> letter;

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        std::cout << "Jebb\n";
    } else if (letter == 'Y') {
        std::cout << "Kannski\n";
    } else {
        std::cout << "Neibb\n";
    }

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string line;
    std::getline(std::cin, line);

    if (line == "a") {
        std::cout << "b\n";
    } else {
        std::cout << "a\n";
    }

    return 0;
}

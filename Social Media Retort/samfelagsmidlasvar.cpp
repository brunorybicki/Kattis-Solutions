#include <iostream>
#include <string>

int main() {
    std::string word, last;

    while (std::cin >> word) {
        last = word;
    }

    std::cout << last << "slop\n";

    return 0;
}

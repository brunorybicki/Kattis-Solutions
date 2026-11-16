#include <iostream>
#include <string>

int main() {
    std::string word, acronym;

    for (int i = 0; i < 4; i++) {
        std::cin >> word;
        acronym += word[0];
    }

    if (acronym == "ICPC") {
        std::cout << "1\n";
    } else {
        std::cout << "0\n";
    }

    return 0;
}

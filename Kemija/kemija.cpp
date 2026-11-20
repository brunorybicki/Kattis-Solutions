#include <iostream>
#include <string>

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    int i = 0;

    while (i < sentence.size()) {
        std::cout << sentence[i];

        if (std::string("aeiou").find(sentence[i]) != std::string::npos) {
            i += 2;
        }

        i++;
    }

    std::cout << "\n";

    return 0;
}

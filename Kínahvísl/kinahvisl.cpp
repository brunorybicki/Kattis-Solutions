#include <iostream>
#include <string>

int main() {
    std::string initialWord, finalWord;
    std::cin >> initialWord >> finalWord;

    int differences = 0;

    for (size_t i = 0; i < initialWord.size(); i++) {
        if (initialWord[i] != finalWord[i]) {
            differences++;
        }
    }

    std::cout << differences + 1 << '\n';
    
    return 0;
}

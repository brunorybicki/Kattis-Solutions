#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string abbreviation;

    for (int i = 0; i < n; i++) {
        std::string word;
        std::cin >> word;

        if (word[0] >= 'A' && word[0] <= 'Z') {
            abbreviation += word[0];
        }
    }

    std::cout << abbreviation << '\n';
    return 0;
}

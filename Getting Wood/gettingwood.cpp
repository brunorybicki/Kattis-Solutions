#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    for (int i = 0; i + 3 < s.length(); i++) {
        if (s[i] == 't' && s[i + 1] == 'r' && s[i + 2] == 'e' && s[i + 3] == 'e') {
            std::cout << i << "\n";
            return 0;
        }
    }

    std::cout << "no trees here\n";
    return 0;
}

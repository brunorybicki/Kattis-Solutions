#include <iomanip>
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int n = s.size(), whitespace = 0, lowercase = 0, uppercase = 0, symbols = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '_') {
            whitespace++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lowercase++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            uppercase++;
        } else {
            symbols++;
        }
    }

    std::cout << std::fixed << std::setprecision(15);
    std::cout << (double) whitespace / n << "\n";
    std::cout << (double) lowercase / n << "\n";
    std::cout << (double) uppercase / n << "\n";
    std::cout << (double) symbols / n << "\n";

    return 0;
}

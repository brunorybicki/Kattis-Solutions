#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;
    
    std::cin.get();

    std::string qwerty = "qwertyuiopasdfghjklzxcvbnm";

    for (int i = 0; i < N; i++) {
        char c = std::cin.get();

        if (c >= 'a' && c <= 'z') {
            std::cout << qwerty[c - 'a'];
        } else {
            std::cout << c;
        }
    }

    std::cout << "\n";

    return 0;
}

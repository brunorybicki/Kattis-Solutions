#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    int volume = 7;

    for (int i = 0; i < n; i++) {
        std::string first, second;
        std::cin >> first >> second;

        if (second == "op!") {
            if (volume < 10) {
                volume++;
            }
        } else {
            if (volume > 0) {
                volume--;
            }
        }
    }

    std::cout << volume << "\n";

    return 0;
}

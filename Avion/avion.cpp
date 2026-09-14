#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string line;
    std::vector<int> found;

    for (int i = 1; i <= 5; i++) {
        std::cin >> line;

        if (line.find("FBI") != std::string::npos) {
            found.push_back(i);
        }
    }

    if (found.empty()) {
        std::cout << "HE GOT AWAY!\n";
    } else {
        for (size_t i = 0; i < found.size(); i++) {
            std::cout << found[i];

            if (i != found.size() - 1) {
                std::cout << " ";
            }
        }

        std::cout << "\n";
    }

    return 0;
}

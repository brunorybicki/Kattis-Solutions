#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::string command;
        std::getline(std::cin, command);

        if (command.rfind("Simon says ", 0) == 0) {
            std::cout << command.substr(10) << "\n";
        }
    }

    return 0;
}

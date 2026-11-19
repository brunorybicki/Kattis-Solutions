#include <iostream>
#include <string>

int main() {
    std::string jon, doctor;
    std::cin >> jon >> doctor;

    if (jon.size() >= doctor.size()) {
        std::cout << "go\n";
    } else {
        std::cout << "no\n";
    }

    return 0;
}

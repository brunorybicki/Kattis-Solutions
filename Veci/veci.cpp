#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string x;
    std::cin >> x;

    if (std::next_permutation(x.begin(), x.end())) {
        std::cout << x << "\n";
    } else {
        std::cout << "0\n";
    }

    return 0;
}

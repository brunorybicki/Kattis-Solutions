#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < n + 2; j++) {
            bool rowEdge = i == 0 || i == n + 1, columnEdge = j == 0 || j == n + 1;

            if (rowEdge && columnEdge) {
                std::cout << "+";
            } else if (rowEdge) {
                std::cout << "-";
            } else if (columnEdge) {
                std::cout << "|";
            } else {
                std::cout << " ";
            }
        }

        std::cout << "\n";
    }

    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int previous, boxes = 0;
    std::cin >> previous;

    for (int i = 1; i < n; i++) {
        int current;
        std::cin >> current;

        if (current > previous) {
            boxes++;
        }

        previous = current;
    }

    std::cout << boxes << "\n";

    return 0;
}

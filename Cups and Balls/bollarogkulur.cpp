#include <iostream>

int main() {
    int ball = 1;

    for (int i = 0; i < 5; i++) {
        int a, b;
        std::cin >> a >> b;

        if (ball == a) {
            ball = b;
        } else if (ball == b) {
            ball = a;
        }
    }

    std::cout << ball << "\n";

    return 0;
}

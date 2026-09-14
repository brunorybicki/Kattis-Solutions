#include <iostream>

int main() {
    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        int a, b, c;
        std::cin >> a >> b >> c;

        int possible = 0;

        if (a + b == c) {
            possible = 1;
        } else if (a - b == c || b - a == c) {
            possible = 1;
        } else if (a * b == c) {
            possible = 1;
        } else if (b != 0 && a % b == 0 && a / b == c) {
            possible = 1;
        } else if (a != 0 && b % a == 0 && b / a == c) {
            possible = 1;
        }

        if (possible) {
            std::cout << "Possible\n";
        } else {
            std::cout << "Impossible\n";
        }
    }

    return 0;
}

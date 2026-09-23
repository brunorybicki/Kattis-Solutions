#include <iostream>
#include <string>

int main() {
    int h, n;
    std::cin >> h >> n;

    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    for (int i = 0; i < n; i++) {
        std::string arrowType;
        std::cin >> arrowType;

        if (arrowType == "standard") {
            h -= a;
        } else if (arrowType == "fire") {
            h -= b;
        } else if (arrowType == "ice") {
            h -= c;
        } else {
            h -= d;
        }
    }

    if (h <= 0) {
        std::cout << "dead\n";
    } else {
        std::cout << h << '\n';
    }

    return 0;
}

#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        double longitude, latitude;
        std::cin >> longitude >> latitude;

        if (longitude >= -180 && longitude <= 180 && latitude >= -90 && latitude <= 90) {
            std::cout << "VALID\n";
        } else {
            std::cout << "INVALID\n";
        }
    }

    return 0;
}

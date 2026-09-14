#include <iostream>
#include <array>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::array<int, 24> hours{};

    for (int i = 0; i < n; i++) {
        int a, b;
        std::cin >> a >> b;

        for (int h = a; h < b; h++) {
            hours[h]++;
        }
    }

    int count = 0;

    for (int h = 0; h < 24; h++) {
        if (hours[h] >= k) {
            count++;
        }
    }

    std::cout << count << "\n";
    return 0;
}

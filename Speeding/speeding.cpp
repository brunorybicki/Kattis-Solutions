#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> t(n), d(n);

    for (int i = 0; i < n; i++) {
        std::cin >> t[i] >> d[i];
    }

    int maximumSpeed = 0;

    for (int i = 1; i < n; i++) {
        int speed = (d[i] - d[i - 1]) / (t[i] - t[i - 1]);

        maximumSpeed = std::max(maximumSpeed, speed);
    }

    std::cout << maximumSpeed << "\n";

    return 0;
}

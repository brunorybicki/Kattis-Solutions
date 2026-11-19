#include <iostream>

int main() {
    int t;
    std::cin >> t;

    for (int test = 0; test < t; test++) {
        int n;
        std::cin >> n;

        int used[4] = {0}, count = 0;

        for (int i = 0; i < n; i++) {
            int a;
            std::cin >> a;

            used[(a - 1) / 10] = 1;
        }

        for (int i = 0; i < 4; i++) {
            if (used[i]) {
                count++;
            }
        }

        std::cout << count << "\n";
    }

    return 0;
}

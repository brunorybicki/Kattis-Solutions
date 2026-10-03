#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> t(N);

    for (int i = 0; i < N; i++) {
        std::cin >> t[i];
    }

    std::sort(t.begin(), t.end(), std::greater<int>());

    int maximumTimeToGrow = 0;

    for (int i = 0; i < N; i++) {
        int timeToGrow = (i + 1) + t[i];

        if (timeToGrow > maximumTimeToGrow) {
            maximumTimeToGrow = timeToGrow;
        }
    }

    std::cout << maximumTimeToGrow + 1 << "\n";

    return 0;
}

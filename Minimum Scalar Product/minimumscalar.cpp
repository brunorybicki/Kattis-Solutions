#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
    long long T;
    std::cin >> T;

    for (long long t = 0; t < T; t++) {
        long long N;
        std::cin >> N;

        std::vector<long long> xi(N), yi(N);

        for (long long i = 0; i < N; i++) {
            std::cin >> xi[i];
        }

        std::sort(xi.begin(), xi.end(), std::greater<long long>());

        for (long long i = 0; i < N; i++) {
            std::cin >> yi[i];
        }

        std::sort(yi.begin(), yi.end());

        long long scalarProduct = 0;

        for (long long i = 0; i < N; i++) {
            scalarProduct += xi[i] * yi[i];
        }

        std::cout << "Case #" << t + 1 << ": " << scalarProduct << "\n";
    }

    return 0;
}

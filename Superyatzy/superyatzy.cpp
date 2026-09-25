#include <algorithm>
#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    int counts[7] = {0};

    for (int i = 0; i < N; i++) {
        int t;
        std::cin >> t;
        
        counts[t]++;
    }

    int maxCount = *std::max_element(counts + 1, counts + 7);

    if (N - maxCount <= M) {
        std::cout << "Ja\n";
    } else {
        std::cout << "Nej\n";
    }

    return 0;
}

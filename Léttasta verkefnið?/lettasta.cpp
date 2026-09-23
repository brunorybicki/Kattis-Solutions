#include <iostream>
#include <string>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<std::string> names(N);

    for (int i = 0; i < N; i++) {
        std::cin >> names[i];
    }

    std::vector<int> totals(N, 0);

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int points;
            std::cin >> points;
            
            totals[j] += points;
        }
    }

    int best = 0;

    for (int j = 1; j < N; j++) {
        if (totals[j] > totals[best]) {
            best = j;
        }
    }

    std::cout << names[best] << '\n';
    return 0;
}

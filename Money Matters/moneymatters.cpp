#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int find(std::vector<int> &parent, int x) {
    while (parent[x] != x) {
        parent[x] = parent[parent[x]];
        x = parent[x];
    }

    return x;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> o(n);

    for (int i = 0; i < n; i++) {
        std::cin >> o[i];
    }

    std::vector<int> parent(n);
    std::iota(parent.begin(), parent.end(), 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;

        parent[find(parent, a)] = find(parent, b);
    }

    std::vector<int> sums(n, 0);

    for (int i = 0; i < n; i++) {
        sums[find(parent, i)] += o[i];
    }

    bool possible = std::all_of(sums.begin(), sums.end(), [](int s) { return s == 0; });

    if (possible) {
        std::cout << "POSSIBLE\n";
    } else {
        std::cout << "IMPOSSIBLE\n";
    }

    return 0;
}

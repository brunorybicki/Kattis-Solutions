#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

std::vector<int> parent;

bool compareByMoney(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    return a.first > b.first;
}

int find(int x) {
    while (parent[x] != x) {
        parent[x] = parent[parent[x]];
        x = parent[x];
    }

    return x;
}

int main() {
    int n, T;
    std::cin >> n >> T;

    std::vector<std::pair<int, int>> people(n);

    for (int i = 0; i < n; i++) {
        std::cin >> people[i].first >> people[i].second;
    }

    std::sort(people.begin(), people.end(), compareByMoney);

    parent.resize(T + 1);

    for (int i = 0; i <= T; i++) {
        parent[i] = i;
    }

    long long total = 0;

    for (int i = 0; i < n; i++) {
        int wanted = people[i].second + 1, slot = find(wanted);

        if (slot > 0) {
            total += people[i].first;
            parent[slot] = slot - 1;
        }
    }

    std::cout << total << "\n";

    return 0;
}

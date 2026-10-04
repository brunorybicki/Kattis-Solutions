#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

bool compareByFinish(const std::pair<int, int> &a, const std::pair<int, int> &b) {
    return a.second < b.second;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> interval(n);

    for (int i = 0; i < n; i++) {
        std::cin >> interval[i].first >> interval[i].second;
    }

    std::sort(interval.begin(), interval.end(), compareByFinish);

    int count = 0, lastFinish = -1;

    for (int i = 0; i < n; i++) {
        if (interval[i].first >= lastFinish) {
            count++;
            lastFinish = interval[i].second;
        }
    }

    std::cout << count << "\n";

    return 0;
}

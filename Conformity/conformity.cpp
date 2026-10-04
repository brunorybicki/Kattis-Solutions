#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::map<std::vector<int>, int> popularity;

    for (int i = 0; i < n; i++) {
        std::vector<int> courses(5);

        for (int j = 0; j < 5; j++) {
            std::cin >> courses[j];
        }

        std::sort(courses.begin(), courses.end());
        popularity[courses]++;
    }

    int maximumPopularity = 0;

    for (auto &entry : popularity) {
        if (entry.second > maximumPopularity) {
            maximumPopularity = entry.second;
        }
    }

    int result = 0;

    for (auto &entry : popularity) {
        if (entry.second == maximumPopularity) {
            result += entry.second;
        }
    }

    std::cout << result << "\n";

    return 0;
}

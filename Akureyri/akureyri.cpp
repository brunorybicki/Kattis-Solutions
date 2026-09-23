#include <iostream>
#include <map>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::map<std::string, int> counts;

    for (int i = 0; i < N; i++) {
        std::string name, location;
        std::cin >> name >> location;

        counts[location]++;
    }

    for (auto& entry : counts) {
        std::cout << entry.first << ' ' << entry.second << '\n';
    }

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string forbidden, memo;
    std::getline(std::cin, forbidden);
    std::getline(std::cin, memo);

    int i = 0, n = memo.size();

    while (i < n) {
        if (memo[i] == ' ') {
            std::cout << " ";
            i++;
            continue;
        }

        int j = i;
        bool bad = false;

        while (j < n && memo[j] != ' ') {
            if (forbidden.find(memo[j]) != std::string::npos) {
                bad = true;
            }

            j++;
        }

        for (int k = i; k < j; k++) {
            if (bad) {
                std::cout << "*";
            } else {
                std::cout << memo[k];
            }
        }

        i = j;
    }

    std::cout << "\n";

    return 0;
}

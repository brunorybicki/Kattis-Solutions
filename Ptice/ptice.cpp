#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string answers;
    std::cin >> answers;

    std::string names[3] = {"Adrian", "Bruno", "Goran"}, patterns[3] = {"ABC", "BABC", "CCAABB"};
    int score[3] = {0}, best = 0;

    for (int i = 0; i < 3; i++) {
        int length = patterns[i].size();

        for (int j = 0; j < n; j++) {
            if (answers[j] == patterns[i][j % length]) {
                score[i]++;
            }
        }

        if (score[i] > best) {
            best = score[i];
        }
    }

    std::cout << best << "\n";

    for (int i = 0; i < 3; i++) {
        if (score[i] == best) {
            std::cout << names[i] << "\n";
        }
    }

    return 0;
}

#include <iostream>
#include <string>

int main() {
    std::string s, suits = "PKHT";
    std::cin >> s;

    int seen[4][14] = {0}, count[4] = {0};
    bool duplicate = false;

    for (int i = 0; i < s.size(); i += 3) {
        int suit = suits.find(s[i]);
        int number = (s[i + 1] - '0') * 10 + (s[i + 2] - '0');

        if (seen[suit][number]) {
            duplicate = true;
        }

        seen[suit][number] = 1;
        count[suit]++;
    }

    if (duplicate) {
        std::cout << "GRESKA\n";
    } else {
        std::cout << 13 - count[0] << " " << 13 - count[1] << " " << 13 - count[2] << " " << 13 - count[3] << "\n";
    }

    return 0;
}

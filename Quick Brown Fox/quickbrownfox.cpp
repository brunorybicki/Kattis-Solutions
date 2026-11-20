#include <cctype>
#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::cin.ignore();

    for (int test = 0; test < n; test++) {
        std::string phrase;
        std::getline(std::cin, phrase);

        int seen[26] = {0};

        for (int i = 0; i < phrase.size(); i++) {
            if (std::isalpha(phrase[i])) {
                seen[std::tolower(phrase[i]) - 'a'] = 1;
            }
        }

        std::string missing = "";

        for (int i = 0; i < 26; i++) {
            if (!seen[i]) {
                missing += (char) ('a' + i);
            }
        }

        if (missing.empty()) {
            std::cout << "pangram\n";
        } else {
            std::cout << "missing " << missing << "\n";
        }
    }

    return 0;
}

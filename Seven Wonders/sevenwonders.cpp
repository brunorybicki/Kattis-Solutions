#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string cards;
    std::cin >> cards;

    int tablets = 0, compasses = 0, gears = 0;

    for (int i = 0; i < cards.size(); i++) {
        if (cards[i] == 'T') {
            tablets++;
        } else if (cards[i] == 'C') {
            compasses++;
        } else {
            gears++;
        }
    }

    int sets = std::min(tablets, std::min(compasses, gears));

    std::cout << tablets * tablets + compasses * compasses + gears * gears + 7 * sets << "\n";

    return 0;
}

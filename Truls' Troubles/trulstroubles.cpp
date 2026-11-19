#include <iostream>
#include <string>

int main() {
    std::string notes;
    std::cin >> notes;

    int truls = 0, henry = 0;

    for (int i = 0; i < notes.size(); i++) {
        if (notes[i] == 'T') {
            truls++;
        } else {
            henry++;
        }

        if ((truls >= 11 && truls - henry >= 2) || (henry >= 11 && henry - truls >= 2)) {
            truls = 0;
            henry = 0;
        }
    }

    std::cout << truls << "-" << henry << "\n";

    return 0;
}

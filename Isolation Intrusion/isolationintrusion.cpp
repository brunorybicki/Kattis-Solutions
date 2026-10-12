#include <iostream>

int main() {
    int n, m[3];
    std::cin >> n >> m[0] >> m[1] >> m[2];

    for (int i = 0; i < 3; i++) {
        bool isolated = true;

        for (int j = 0; j < 3; j++) {
            if (j != i && m[i] + n >= m[j]) {
                isolated = false;
            }
        }

        if (isolated) {
            std::cout << m[i] + n << "\n";

            return 0;
        }
    }

    std::cout << "impossible\n";

    return 0;
}

#include <iostream>
#include <string>
#include <vector>

int main() {
    int r, c, n;
    std::cin >> r >> c >> n;

    std::vector<std::string> board(r, std::string(c, '.'));

    for (int i = 0; i < n; i++) {
        int a, b;
        std::cin >> a >> b;

        board[a - 1][b - 1] = '*';
    }

    for (int i = 0; i < r; i++) {
        std::cout << board[i] << "\n";
    }

    return 0;
}

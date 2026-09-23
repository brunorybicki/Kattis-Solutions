#include <algorithm>
#include <iostream>

int main() {
    int fr, yr, br, mr, sr;
    std::cin >> fr >> yr >> br >> mr >> sr;

    int f, y, b, m, s;
    std::cin >> f >> y >> b >> m >> s;

    int cinnamonBuns = std::min({f / fr, y / yr, b / br, m / mr, s / sr});

    std::cout << cinnamonBuns << '\n';
    return 0;
}

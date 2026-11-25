#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    int n;
    std::cin >> n;

    std::unordered_map<std::string, double> logAmount;
    logAmount["pink"] = 0;

    for (int i = 0; i < n; i++) {
        std::string offered, wanted;
        double rate;
        std::cin >> offered >> wanted >> rate;

        if (logAmount.count(wanted) == 0) {
            continue;
        }

        double value = logAmount[wanted] + std::log(rate);

        if (logAmount.count(offered) == 0 || value > logAmount[offered]) {
            logAmount[offered] = value;
        }
    }

    double blue = 0;

    if (logAmount.count("blue") > 0) {
        blue = std::exp(logAmount["blue"]);
    }

    if (blue > 10) {
        blue = 10;
    }

    std::cout << std::fixed << std::setprecision(15) << blue << "\n";

    return 0;
}

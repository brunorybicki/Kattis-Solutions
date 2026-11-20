#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

int main() {
    double startX, startY, endX, endY;
    std::cin >> startX >> startY >> endX >> endY;

    int n;
    std::cin >> n;

    std::vector<double> x(n + 2), y(n + 2);
    std::vector<std::vector<double>> time(n + 2, std::vector<double>(n + 2));

    x[0] = startX;
    y[0] = startY;
    x[n + 1] = endX;
    y[n + 1] = endY;

    for (int i = 1; i <= n; i++) {
        std::cin >> x[i] >> y[i];
    }

    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < n + 2; j++) {
            double distance = std::sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));

            time[i][j] = distance / 5;

            if (i >= 1 && i <= n && 2 + std::fabs(distance - 50) / 5 < time[i][j]) {
                time[i][j] = 2 + std::fabs(distance - 50) / 5;
            }
        }
    }

    for (int k = 0; k < n + 2; k++) {
        for (int i = 0; i < n + 2; i++) {
            for (int j = 0; j < n + 2; j++) {
                if (time[i][k] + time[k][j] < time[i][j]) {
                    time[i][j] = time[i][k] + time[k][j];
                }
            }
        }
    }

    std::cout << std::fixed << std::setprecision(6) << time[0][n + 1] << "\n";

    return 0;
}

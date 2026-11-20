#include <math.h>
#include <stdio.h>

int main() {
    double startX, startY, endX, endY;
    scanf("%lf %lf", &startX, &startY);
    scanf("%lf %lf", &endX, &endY);

    int n;
    scanf("%d", &n);

    double x[n + 2], y[n + 2], time[n + 2][n + 2];

    x[0] = startX;
    y[0] = startY;
    x[n + 1] = endX;
    y[n + 1] = endY;

    for (int i = 1; i <= n; i++) {
        scanf("%lf %lf", &x[i], &y[i]);
    }

    for (int i = 0; i < n + 2; i++) {
        for (int j = 0; j < n + 2; j++) {
            double distance = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));

            time[i][j] = distance / 5;

            if (i >= 1 && i <= n && 2 + fabs(distance - 50) / 5 < time[i][j]) {
                time[i][j] = 2 + fabs(distance - 50) / 5;
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

    printf("%.6f\n", time[0][n + 1]);

    return 0;
}

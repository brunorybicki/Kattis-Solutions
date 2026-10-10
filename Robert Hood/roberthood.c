#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int C;
    scanf("%d", &C);

    int x[C], y[C];

    for (int i = 0; i < C; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    int low[2001], high[2001];

    for (int i = 0; i < 2001; i++) {
        low[i] = 1001;
        high[i] = -1001;
    }

    for (int i = 0; i < C; i++) {
        if (y[i] < low[x[i] + 1000]) {
            low[x[i] + 1000] = y[i];
        }
        if (y[i] > high[x[i] + 1000]) {
            high[x[i] + 1000] = y[i];
        }
    }

    int cx[4002], cy[4002], count = 0;

    for (int i = 0; i < 2001; i++) {
        if (low[i] != 1001) {
            cx[count] = i - 1000;
            cy[count] = low[i];
            count++;

            cx[count] = i - 1000;
            cy[count] = high[i];
            count++;
        }
    }

    int best = 0;

    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            int dx = cx[i] - cx[j], dy = cy[i] - cy[j];

            if (dx * dx + dy * dy > best) {
                best = dx * dx + dy * dy;
            }
        }
    }

    printf("%.9f\n", sqrt(best));

    return 0;
}

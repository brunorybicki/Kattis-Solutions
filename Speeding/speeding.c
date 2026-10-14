#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int t[n], d[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &t[i], &d[i]);
    }

    int maximumSpeed = 0;

    for (int i = 1; i < n; i++) {
        int speed = (d[i] - d[i - 1]) / (t[i] - t[i - 1]);

        if (speed > maximumSpeed) {
            maximumSpeed = speed;
        }
    }

    printf("%d\n", maximumSpeed);

    return 0;
}

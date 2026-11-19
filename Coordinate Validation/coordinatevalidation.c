#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        double longitude, latitude;
        scanf("%lf %lf", &longitude, &latitude);

        if (longitude >= -180 && longitude <= 180 && latitude >= -90 && latitude <= 90) {
            printf("VALID\n");
        } else {
            printf("INVALID\n");
        }
    }

    return 0;
}

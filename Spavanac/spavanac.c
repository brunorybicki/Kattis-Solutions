#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);

    int totalMinutes = H * 60 + M - 45;

    if (totalMinutes < 0) {
        totalMinutes += 24 * 60;
    }

    H = totalMinutes / 60;
    M = totalMinutes % 60;

    printf("%d %d", H, M);
    return 0;
}

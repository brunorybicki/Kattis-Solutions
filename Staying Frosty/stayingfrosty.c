#include <stdio.h>

int main() {
    int w, p;
    scanf("%d %d", &w, &p);

    if (w <= p * 360) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

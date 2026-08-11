#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int time;
    int left = 0;
    int right = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &time);
        left += time;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &time);
        right += time;
    }

    if (left < right) {
        printf("left");
    } else if (right < left) {
        printf("right");
    } else {
        printf("either");
    }

    return 0;
}

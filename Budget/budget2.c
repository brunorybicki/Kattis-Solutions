#include <stdio.h>

int main() {
    int b, p1, p2, p3;
    scanf("%d", &b);
    scanf("%d", &p1);
    scanf("%d", &p2);
    scanf("%d", &p3);

    if (p1 + p2 + p3 <= b) {
        printf("Budget is sufficient.");
    } else {
        printf("Budget is insufficient.");
    }
    
    return 0;
}

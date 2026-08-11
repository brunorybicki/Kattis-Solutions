#include <stdio.h>

int main() {
    int xh, yh, xp, yp;
    scanf("%d %d", &xh, &yh);
    scanf("%d %d", &xp, &yp);
    
    if (xh == xp || yh == yp) {
        printf("1");
    } else {
        printf("2");
    }
    
    return 0;
}
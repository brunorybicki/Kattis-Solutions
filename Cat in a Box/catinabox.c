#include <stdio.h>

int main() {
    int h, w, l, v;
    scanf("%d %d %d %d", &h, &w, &l, &v);
    
    int box = h * w * l;
    
    if (v > box) {
        printf("TOO TIGHT");
    } else if (v == box) {
        printf("COZY");
    } else {
        printf("SO MUCH SPACE");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    
    if (x < 13) {
        printf("%d", x);
    } else {
        printf("%d", x + 1);
    }
    
    return 0;
}
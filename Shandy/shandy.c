#include <stdio.h>

int main() {
    int B, L;
    scanf("%d", &B);
    scanf("%d", &L);
    
    if (B < L) {
        printf("%d", B * 2);
    } else {
        printf("%d", L * 2);
    }
    
    return 0;
}

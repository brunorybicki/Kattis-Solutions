#include <stdio.h>

int main() {
    int n, m;
    scanf("%d ? %d", &n, &m);
    
    if (n > m) {
        printf(">");
    } else if (m > n) {
        printf("<");
    } else {
        printf("Goggi svangur!");
    }
    
    return 0;
}

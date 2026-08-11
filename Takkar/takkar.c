#include <stdio.h>

int main(void) {
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a > b) {
        printf("MAGA!");
    } else if (b > a) {
        printf("FAKE NEWS!");
    } else {
        printf("WORLD WAR 3!");
    }
    
    return 0;
}
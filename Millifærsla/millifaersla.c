#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if ((a < b) && (a < c)) {
        printf("Monnei");
    } else if ((b < a) && (b < c)) {
        printf("Fjee");
    } else {
        printf("Dolladollabilljoll");
    }
    
    return 0;
}
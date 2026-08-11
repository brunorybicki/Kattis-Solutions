#include <stdio.h>

int main (void) {
    int n;
    scanf("%d", &n);
    
    if (n % 10 == 0) {
        printf("Jebb");
    } else {
        printf("Neibb");
    }
    
    return 0;
}
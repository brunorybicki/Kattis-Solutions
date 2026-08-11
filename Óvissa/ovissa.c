#include <stdio.h>

int main(void) {
    char u;
    int count = 0;
    
    while (scanf("%c", &u) != EOF) {
        count++;
    }
    
    printf("%d", count - 1);
    return 0;
}

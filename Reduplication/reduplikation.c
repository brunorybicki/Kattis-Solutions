#include <stdio.h>

int main() {
    char s[11];
    scanf("%s", &s);
    
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%s", s);
    }
    printf("\n");
    
    return 0;
}
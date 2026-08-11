#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int t[1000];
    int lessThanZero = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &t[i]);
        
        if (t[i] < 0) {
            lessThanZero++;
        }
    }
    
    printf("%d", lessThanZero);
    return 0;
}

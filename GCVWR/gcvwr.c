#include <stdio.h>

int main() {
    int G, T, n;
    scanf("%d %d %d", &G, &T, &n);
 
    int limit = (G - T) * 9 / 10;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        int w;
        scanf("%d", &w);
        
        sum += w;
    }
    
    printf("%d", limit - sum);
    return 0;
}

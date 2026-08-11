#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    char result[1001];
    
    for (int i = 0; i < n; i++) {
        int amount;
        scanf("%d", &amount);
        
        if (k >= amount) {
            k -= amount;
            result[i] = '1';
        } else {
            result[i] = '0';
        }
    }
    
    printf("%s", result);
    return 0;
}

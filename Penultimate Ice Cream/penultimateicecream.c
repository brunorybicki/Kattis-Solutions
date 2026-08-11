#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int prices[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    
    int max1 = -1;
    int max2 = -1;
    
    for (int i = 0; i < n; i++) {
        if (prices[i] > max1) {
            max2 = max1;
            max1 = prices[i];
        } else if (prices[i] > max2) {
            max2 = prices[i];
        }
    }
    
    printf("%d", max2);
    return 0;
}

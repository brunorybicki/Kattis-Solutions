#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    
    int empty = 0;

    for (int i = 0; i < n; i++) {
        char lane[501];
        scanf("%s", lane);
    
        for (int j = 0; j < m; j++) {
            if (lane[j] == '.') {
                empty++;
            }
        }
    }
    
    double result = (double) empty / (m * n);
    printf("%f\n", result);
    return 0;
}

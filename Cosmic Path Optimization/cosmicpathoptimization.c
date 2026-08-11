#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);
    
    int T[10000];
    
    for (int i = 0; i < M; i++) {
        scanf("%d", &T[i]);
    }
    
    int sumOfTemperatures = 0;
    
    for (int i = 0; i < M; i++) {
        sumOfTemperatures += T[i];
    }
    
    printf("%d", sumOfTemperatures / M);
    return 0;
}

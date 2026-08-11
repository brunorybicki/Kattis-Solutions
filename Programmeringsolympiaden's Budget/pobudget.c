#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char string[30];
    int K[10000000];
    
    int budget = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%s", string);
        scanf("%d", &K[i]);
        
        budget += K[i];
    }
    
    if (budget > 0) {
        printf("Usch, vinst");
    } else if (budget < 0) {
        printf("Nekad");
    } else {
        printf("Lagom");
    }
    
    return 0;
}

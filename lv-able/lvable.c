#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char string[500000];
    int ivScore = 2;
    
    for (int i = 0; i < N; i++) {
        scanf("%c", &string[i]);
        
        if (string[i] == 'l' || string[i] == 'v') {
            ivScore = 1;
            
            if (string[i] == 'v') {
                if (string[i - 1] == 'l') {
                    ivScore = 0;
                    printf("%d", ivScore);
                    return 0;
                }
            }
        }
    }
    
    printf("%d", ivScore);
    return 0;
}
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int number, sum = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &number);
        sum += number;
    }

    printf("%d", sum);
    return 0;
}
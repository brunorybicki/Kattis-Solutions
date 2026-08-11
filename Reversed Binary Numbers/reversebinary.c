#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int reversedNumber = 0;
    
    while (N > 0) {
        reversedNumber = reversedNumber * 2 + N % 2;
        N /= 2;
    }

    printf("%d", reversedNumber);
    return 0;
}

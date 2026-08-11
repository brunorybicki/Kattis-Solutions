#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    int thirdDigitOfA = A / 100;
    int secondDigitOfA = (A / 10) % 10;
    int firstDigitOfA = A % 10;
    int reversedA = firstDigitOfA * 100 + secondDigitOfA * 10 + thirdDigitOfA;
    
    int thirdDigitOfB = B / 100;
    int secondDigitOfB = (B / 10) % 10;
    int firstDigitOfB = B % 10;
    int reversedB = firstDigitOfB * 100 + secondDigitOfB * 10 + thirdDigitOfB;
    
    if (reversedA > reversedB) {
        printf("%d", reversedA);
    } else {
        printf("%d", reversedB);
    }
    
    return 0;
}

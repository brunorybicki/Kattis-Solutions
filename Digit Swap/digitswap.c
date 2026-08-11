#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    int digit1 = number / 10;
    int digit2 = number % 10;

    printf("%d%d\n", digit2, digit1);
    return 0;
}
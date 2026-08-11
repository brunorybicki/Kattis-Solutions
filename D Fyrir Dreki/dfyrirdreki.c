#include <stdio.h>

int main(void) {
    int a, b, c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int result = b * b - 4 * a * c;

    if (result > 0) {
        printf("2");
    } else if (result == 0) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
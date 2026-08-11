#include <stdio.h>

int main(void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A + B == C) {
        printf("correct!\n");
    } else {
        printf("wrong!\n");
    }

    return 0;
}

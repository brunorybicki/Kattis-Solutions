#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0) {
        printf("second\n");
    } else {
        printf("first\n");
    }

    return 0;
}

#include <stdio.h>

int main(void) {
    int c, count = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}

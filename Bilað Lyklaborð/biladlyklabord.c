#include <stdio.h>

int main() {
    int c;
    int previous = EOF;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c != previous) {
            putchar(c);
        }

        previous = c;
    }

    putchar('\n');
    return 0;
}

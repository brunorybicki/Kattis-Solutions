#include <stdio.h>
#include <ctype.h>

int main() {
    int n, c, first = 1;
    scanf("%d ", &n);

    while ((c = getchar()) != EOF) {
        if (first) {
            putchar(toupper(c));
        } else {
            putchar(tolower(c));
        }

        if (c == '\n') {
            first = 1;
        } else {
            first = 0;
        }
    }
}

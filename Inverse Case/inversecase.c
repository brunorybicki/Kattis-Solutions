#include <stdio.h>
#include <ctype.h>

int main() {
    int c;

    while ((c = getchar()) != EOF && c != '\n') {
        if (islower(c)) {
            printf("%c", toupper(c));
        } else if (isupper(c)) {
            printf("%c", tolower(c));
        } else {
            printf("%c", c);
        }
    }
    
    return 0;
}

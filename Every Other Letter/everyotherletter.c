#include <stdio.h>

int main() {
    char s[1000000];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (i % 2 == 0) {
            printf("%c", s[i]);
        }
    }

    return 0;
}

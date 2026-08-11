#include <stdio.h>

int main() {
    char s[100];
    scanf("%s", s);

    printf("%c", s[0]);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '-') {
            printf("%c", s[i + 1]);
        }
    }

    return 0;
}

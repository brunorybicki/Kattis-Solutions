#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'k' && s[i + 1] == 't' && s[i + 2] == 'h') {
            printf("yes\n");
            return 0;
        }
    }

    printf("no\n");
    return 0;
}

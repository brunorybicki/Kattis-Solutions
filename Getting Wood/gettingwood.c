#include <stdio.h>

int main() {
    char s[101];
    scanf("%[^\n]", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 't' && s[i + 1] == 'r' && s[i + 2] == 'e' && s[i + 3] == 'e') {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("no trees here\n");
    return 0;
}

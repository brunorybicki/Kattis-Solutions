#include <stdio.h>

int main() {
    char s[1001];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'e') {
            printf("ee");
        } else {
            putchar(s[i]);
        }
    }

    return 0;
}

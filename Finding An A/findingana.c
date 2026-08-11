#include <stdio.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int i = 0;

    while (s[i] != 'a') {
        i++;
    }

    printf("%s", s + i);
    return 0;
}

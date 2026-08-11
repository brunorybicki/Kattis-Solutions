#include <stdio.h>

int main(void) {
    char word[1001];
    int i = 0;
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
        word[i] = c;
        i++;
    }

    word[i] = '\0';

    printf("%s", word);

    return 0;
}
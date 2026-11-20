#include <stdio.h>
#include <string.h>

int main() {
    char sentence[105];
    scanf("%[^\n]", sentence);

    int i = 0;

    while (sentence[i] != '\0') {
        printf("%c", sentence[i]);

        if (strchr("aeiou", sentence[i]) != NULL) {
            i += 2;
        }

        i++;
    }

    printf("\n");

    return 0;
}

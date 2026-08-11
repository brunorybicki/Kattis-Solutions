#include <stdio.h>
#include <string.h>

int main() {
    char word[1001];

    scanf("%s", word);

    int length = strlen(word);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }

    printf("\n");
    return 0;
}

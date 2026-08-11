#include <stdio.h>
#include <string.h>

int main() {
    char word[31];
    scanf("%s", word);

    for (int i = 0; word[i + 1] != '\0'; i++) {
        if (word[i] == 's' && word[i + 1] == 's') {
            printf("hiss\n");
            return 0;
        }
    }

    printf("no hiss\n");
    return 0;
}

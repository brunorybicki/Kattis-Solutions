#include <stdio.h>

int main(void) {
    char word[101];
    scanf("%s", word);

    int numOfLetters = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')) {
            numOfLetters++;
        }
    }

    printf("%d\n", numOfLetters);
    return 0;
}

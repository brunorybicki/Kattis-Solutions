#include <stdio.h>

int main() {
    char ch;
    char word[1000];
    int i = 0;

    while ((ch = getchar()) != EOF && ch != '\n') {
        word[i] = ch;
        i++;
    }

    int isSubstring = 0;

    for (int j = 0; j < i - 2; j++) {
        if (word[j] == 'C') {
            if (word[j + 1] == 'O') {
                if (word[j + 2] == 'V') {
                    isSubstring = 1;
                }
            }
        }
    }

    if (isSubstring) {
        printf("Veikur!");
    } else {
        printf("Ekki veikur!");
    }

    return 0;
}
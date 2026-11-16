#include <stdio.h>
#include <string.h>

int main() {
    char word[101], acronym[5];

    for (int i = 0; i < 4; i++) {
        scanf("%s", word);
        acronym[i] = word[0];
    }

    acronym[4] = '\0';

    if (strcmp(acronym, "ICPC") == 0) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}

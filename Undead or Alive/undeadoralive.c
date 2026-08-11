#include <stdio.h>
#include <string.h>

int main() {
    char text[161];
    scanf("%[^\n]", text);

    int smiley = 0;
    int frowny = 0;
    int length = strlen(text);

    for (int i = 0; i + 1 < length; i++) {
        if (text[i] == ':' && text[i + 1] == ')') {
            smiley = 1;
        } else if (text[i] == ':' && text[i + 1] == '(') {
            frowny = 1;
        }
    }

    if (smiley && frowny) {
        printf("double agent");
    } else if (smiley) {
        printf("alive");
    } else if (frowny) {
        printf("undead");
    } else {
        printf("machine");
    }

    return 0;
}

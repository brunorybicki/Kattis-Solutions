#include <stdio.h>
#include <string.h>

int main() {
    char word[1000005], last[1000005];

    while (scanf("%s", word) == 1) {
        strcpy(last, word);
    }

    printf("%sslop\n", last);

    return 0;
}

#include <stdio.h>

int main() {
    char initialWord[1000001];
    scanf("%s", initialWord);

    int c = getchar();

    while (c == '\n' || c == '\r' || c == ' ') {
        c = getchar();
    }

    int differences = 0;

    for (int i = 0; initialWord[i] != '\0'; i++) {
        if (initialWord[i] != c) {
            differences++;
        }

        c = getchar();
    }

    printf("%d\n", differences + 1);

    return 0;
}

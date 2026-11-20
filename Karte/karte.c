#include <stdio.h>
#include <string.h>

int main() {
    char s[2005], *suits = "PKHT";
    scanf("%s", s);

    int seen[4][14] = {0}, count[4] = {0}, duplicate = 0;

    for (int i = 0; s[i] != '\0'; i += 3) {
        int suit = strchr(suits, s[i]) - suits;
        int number = (s[i + 1] - '0') * 10 + (s[i + 2] - '0');

        if (seen[suit][number]) {
            duplicate = 1;
        }

        seen[suit][number] = 1;
        count[suit]++;
    }

    if (duplicate) {
        printf("GRESKA\n");
    } else {
        printf("%d %d %d %d\n", 13 - count[0], 13 - count[1], 13 - count[2], 13 - count[3]);
    }

    return 0;
}

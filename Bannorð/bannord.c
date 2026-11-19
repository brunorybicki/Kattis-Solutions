#include <stdio.h>
#include <string.h>

int main() {
    char forbidden[27], memo[1000005] = "";
    scanf("%s", forbidden);
    scanf(" %[^\n]", memo);

    int i = 0;

    while (memo[i] != '\0') {
        if (memo[i] == ' ') {
            printf(" ");
            i++;
            continue;
        }

        int j = i, bad = 0;

        while (memo[j] != '\0' && memo[j] != ' ') {
            if (strchr(forbidden, memo[j]) != NULL) {
                bad = 1;
            }

            j++;
        }

        for (int k = i; k < j; k++) {
            if (bad) {
                printf("*");
            } else {
                printf("%c", memo[k]);
            }
        }

        i = j;
    }

    printf("\n");

    return 0;
}

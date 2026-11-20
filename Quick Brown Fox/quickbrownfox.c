#include <ctype.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    getchar();

    for (int test = 0; test < n; test++) {
        char phrase[205];
        fgets(phrase, 205, stdin);

        int seen[26] = {0};

        for (int i = 0; phrase[i] != '\0'; i++) {
            if (isalpha(phrase[i])) {
                seen[tolower(phrase[i]) - 'a'] = 1;
            }
        }

        char missing[27];
        int count = 0;

        for (int i = 0; i < 26; i++) {
            if (!seen[i]) {
                missing[count++] = 'a' + i;
            }
        }

        missing[count] = '\0';

        if (count == 0) {
            printf("pangram\n");
        } else {
            printf("missing %s\n", missing);
        }
    }

    return 0;
}

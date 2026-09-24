#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char word[1001];
        scanf("%s", word);

        if (word[0] >= 'A' && word[0] <= 'Z') {
            printf("%c", word[0]);
        }
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char word[101];
        scanf("%s", word);

        if (i % 2 == 0) {
            printf("%s\n", word);
        }
    }

    return 0;
}
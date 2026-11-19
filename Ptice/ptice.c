#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char answers[n + 1];
    scanf("%s", answers);

    char *names[3] = {"Adrian", "Bruno", "Goran"}, *patterns[3] = {"ABC", "BABC", "CCAABB"};
    int score[3] = {0}, best = 0;

    for (int i = 0; i < 3; i++) {
        int length = strlen(patterns[i]);

        for (int j = 0; j < n; j++) {
            if (answers[j] == patterns[i][j % length]) {
                score[i]++;
            }
        }

        if (score[i] > best) {
            best = score[i];
        }
    }

    printf("%d\n", best);

    for (int i = 0; i < 3; i++) {
        if (score[i] == best) {
            printf("%s\n", names[i]);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    char cards[5][3];
    int maxStrength = 1;

    for (int i = 0; i < 5; i++) {
        scanf("%s", cards[i]);
    }

    for (int i = 0; i < 5; i++) {
        int count = 0;

        for (int j = 0; j < 5; j++) {
            if (cards[i][0] == cards[j][0]) {
                count++;
            }
        }

        if (count > maxStrength) {
            maxStrength = count;
        }
    }

    printf("%d", maxStrength);
    return 0;
}

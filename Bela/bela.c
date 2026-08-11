#include <stdio.h>

int main() {
    int n;
    char dominant;
    int points = 0;

    scanf("%d %c", &n, &dominant);

    char card[3];

    for (int i = 0; i < 4 * n; i++) {
        scanf("%s", card);

        if (card[0] == 'A') {
            points += 11;
        } else if (card[0] == 'K') {
            points += 4;
        } else if (card[0] == 'Q') {
            points += 3;
        } else if (card[0] == 'J') {
            if (card[1] == dominant) {
                points += 20;
            } else {
                points += 2;
            }
        } else if (card[0] == 'T') {
            points += 10;
        } else if (card[0] == '9') {
            if (card[1] == dominant) {
                points += 14;
            }
        }
    }

    printf("%d", points);
    return 0;
}

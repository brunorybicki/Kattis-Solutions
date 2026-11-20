#include <stdio.h>

int main() {
    char cards[1005];
    scanf("%s", cards);

    int tablets = 0, compasses = 0, gears = 0;

    for (int i = 0; cards[i] != '\0'; i++) {
        if (cards[i] == 'T') {
            tablets++;
        } else if (cards[i] == 'C') {
            compasses++;
        } else {
            gears++;
        }
    }

    int sets = tablets;

    if (compasses < sets) {
        sets = compasses;
    }

    if (gears < sets) {
        sets = gears;
    }

    printf("%d\n", tablets * tablets + compasses * compasses + gears * gears + 7 * sets);

    return 0;
}

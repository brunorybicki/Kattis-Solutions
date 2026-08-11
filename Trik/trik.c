#include <stdio.h>

int main(void) {
    char moves[50];
    scanf("%s", moves);

    int position = 1;

    for (int i = 0; moves[i] != '\0'; i++) {
        if (moves[i] == 'A') {
            if (position == 1) {
                position = 2;
            } else if (position == 2) {
                position = 1;
            }
        } else if (moves[i] == 'B') {
            if (position == 2) {
                position = 3;
            } else if (position == 3) {
                position = 2;
            }
        } else if (moves[i] == 'C') {
            if (position == 1) {
                position = 3;
            } else if (position == 3) {
                position = 1;
            }
        }
    }

    printf("%d", position);
    return 0;
}

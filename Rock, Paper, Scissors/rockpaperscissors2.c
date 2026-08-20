#include <stdio.h>

int main() {
    char player1[9], player2[9];
    scanf("%s", player1);
    scanf("%s", player2);

    if (player1[0] == player2[0]) {
        printf("Draw");
    } else if ((player1[0] == 's' && player2[0] == 'p') || (player1[0] == 'r' && player2[0] == 's') || (player1[0] == 'p' && player2[0] == 'r')) {
        printf("Player 1"); 
    } else {
        printf("Player 2");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int winner = 0;
    int highestScore = 0;

    for (int contestant = 1; contestant <= 5; contestant++) {
        int score = 0;
        int grade;

        for (int i = 0; i < 4; i++) {
            scanf("%d", &grade);
            score += grade;
        }

        if (score > highestScore) {
            highestScore = score;
            winner = contestant;
        }
    }

    printf("%d %d", winner, highestScore);
    return 0;
}

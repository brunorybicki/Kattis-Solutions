#include <stdio.h>
#include <string.h>

int main() {
    char record[201];
    scanf("%s", record);

    int scoreA = 0, scoreB = 0;

    for (int i = 0; i < strlen(record); i += 2) {
        int points = record[i + 1] - '0';

        if (record[i] == 'A') {
            scoreA += points;
        } else {
            scoreB += points;
        }
    }

    if (scoreA > scoreB) {
        printf("A");
    } else {
        printf("B");
    }

    return 0;
}

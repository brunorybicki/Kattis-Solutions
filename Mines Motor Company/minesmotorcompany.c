#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    char ROW, COLUMN;
    scanf(" %c%c", &ROW, &COLUMN);

    int previousRow = ROW - 'A';
    int previousColumn = COLUMN - 'A';

    int totalDistance = 0;

    for (int i = 1; i < N; i++) {
        scanf(" %c%c", &ROW, &COLUMN);
        int currentRow = ROW - 'A';
        int currentColumn = COLUMN - 'A';

        totalDistance += abs(currentRow - previousRow) + abs(currentColumn - previousColumn);

        previousRow = currentRow;
        previousColumn = currentColumn;
    }

    printf("%d", totalDistance);
    return 0;
}

#include <stdio.h>

int courses[10000][5], popularity[10000];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &courses[i][j]);
        }

        for (int j = 0; j < 5; j++) {
            for (int k = j + 1; k < 5; k++) {
                if (courses[i][k] < courses[i][j]) {
                    int temp = courses[i][j];
                    courses[i][j] = courses[i][k];
                    courses[i][k] = temp;
                }
            }
        }
    }

    int maximumPopularity = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int same = 1;

            for (int k = 0; k < 5; k++) {
                if (courses[i][k] != courses[j][k]) {
                    same = 0;
                    break;
                }
            }

            popularity[i] += same;
        }

        if (popularity[i] > maximumPopularity) {
            maximumPopularity = popularity[i];
        }
    }

    int result = 0;

    for (int i = 0; i < n; i++) {
        if (popularity[i] == maximumPopularity) {
            result++;
        }
    }

    printf("%d\n", result);

    return 0;
}

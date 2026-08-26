#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    char city[100][21];

    for (int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);

        for (int j = 0; j < n; j++) {
            scanf("%s", city[j]);
        }

        int distinctCities = 0;

        for (int j = 0; j < n; j++) {
            int seenBefore = 0;

            for (int k = 0; k < j; k++) {
                if (strcmp(city[j], city[k]) == 0) {
                    seenBefore = 1;
                    break;
                }
            }
            
            if (!seenBefore) {
                distinctCities++;
            }
        }

        printf("%d\n", distinctCities);
    }

    return 0;
}

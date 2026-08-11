#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char first[50];
        char second[50];

        scanf("%s", first);
        scanf("%s", second);

        printf("%s\n", first);
        printf("%s\n", second);

        for (int j = 0; first[j] != '\0'; j++) {
            if (first[j] == second[j]) {
                printf(".");
            } else {
                printf("*");
            }
        }
        
        printf("\n\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char word[2][20];

    for (int i = 0; i < n; i++) {
        scanf("%s", word[i]);
    }

    if (n == 1) {
        printf("%s\n", word[0]);
    } else {
        printf("blandad best\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n;
    char name[1001][101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Takk %s\n", name[i]);
    }

    return 0;
}

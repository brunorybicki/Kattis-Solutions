#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int *list = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", list[i]);
    }

    free(list);
    return 0;
}
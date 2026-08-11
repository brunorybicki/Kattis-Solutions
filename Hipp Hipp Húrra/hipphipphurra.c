#include <stdio.h>

int main() {
    char name[101];
    int x;

    scanf("%s", name);
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        printf("Hipp hipp hurra, %s!\n", name);
    }

    return 0;
}
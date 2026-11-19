#include <stdio.h>
#include <string.h>

int main() {
    char x[20];
    scanf("%s", x);

    int n = strlen(x), i = n - 2;

    while (i >= 0 && x[i] >= x[i + 1]) {
        i--;
    }

    if (i < 0) {
        printf("0\n");
        return 0;
    }

    int j = n - 1;

    while (x[j] <= x[i]) {
        j--;
    }

    char temp = x[i];
    x[i] = x[j];
    x[j] = temp;

    for (int a = i + 1, b = n - 1; a < b; a++, b--) {
        temp = x[a];
        x[a] = x[b];
        x[b] = temp;
    }

    printf("%s\n", x);

    return 0;
}

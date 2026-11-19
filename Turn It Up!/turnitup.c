#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    int volume = 7;

    for (int i = 0; i < n; i++) {
        char first[10], second[10];
        scanf("%s %s", first, second);

        if (strcmp(second, "op!") == 0) {
            if (volume < 10) {
                volume++;
            }
        } else {
            if (volume > 0) {
                volume--;
            }
        }
    }

    printf("%d\n", volume);

    return 0;
}

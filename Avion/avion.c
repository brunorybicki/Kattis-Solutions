#include <stdio.h>
#include <string.h>

int main() {
    char line[20];
    int found[5], count = 0;

    for (int i = 1; i <= 5; i++) {
        scanf("%s", line);

        if (strstr(line, "FBI") != NULL) {
            found[count++] = i;
        }
    }

    if (count == 0) {
        printf("HE GOT AWAY!\n");
    } else {
        for (int i = 0; i < count; i++) {
            printf("%d", found[i]);

            if (i != count - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

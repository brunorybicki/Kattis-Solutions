#include <stdio.h>
#include <string.h>

int main() {
    char line[100] = "";
    fgets(line, 100, stdin);

    line[strcspn(line, "\r\n")] = '\0';

    if (strcmp(line, "a") == 0) {
        printf("b\n");
    } else {
        printf("a\n");
    }

    return 0;
}

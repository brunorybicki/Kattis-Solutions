#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    getchar();

    for (int i = 0; i < n; i++) {
        char command[1005];
        fgets(command, 1005, stdin);

        command[strcspn(command, "\r\n")] = '\0';

        if (strncmp(command, "Simon says ", 11) == 0) {
            printf("%s\n", command + 10);
        }
    }

    return 0;
}

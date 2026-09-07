#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    for (int t = 0; t < N; t++) {
        char message[1000];
        fgets(message, sizeof(message), stdin);
        
        message[strlen(message) - 1] = '\0';

        printf("Case #%d: ", t + 1);

        char lastDigit = '\0';

        for (int i = 0; message[i] != '\0'; i++) {
            char presses[5];

            if (message[i] == 'a') {
                strcpy(presses, "2");
            } else if (message[i] == 'b') {
                strcpy(presses, "22");
            } else if (message[i] == 'c') {
                strcpy(presses, "222");
            } else if (message[i] == 'd') {
                strcpy(presses, "3");
            } else if (message[i] == 'e') {
                strcpy(presses, "33");
            } else if (message[i] == 'f') {
                strcpy(presses, "333");
            } else if (message[i] == 'g') {
                strcpy(presses, "4");
            } else if (message[i] == 'h') {
                strcpy(presses, "44");
            } else if (message[i] == 'i') {
                strcpy(presses, "444");
            } else if (message[i] == 'j') {
                strcpy(presses, "5");
            } else if (message[i] == 'k') {
                strcpy(presses, "55");
            } else if (message[i] == 'l') {
                strcpy(presses, "555");
            } else if (message[i] == 'm') {
                strcpy(presses, "6");
            } else if (message[i] == 'n') {
                strcpy(presses, "66");
            } else if (message[i] == 'o') {
                strcpy(presses, "666");
            } else if (message[i] == 'p') {
                strcpy(presses, "7");
            } else if (message[i] == 'q') {
                strcpy(presses, "77");
            } else if (message[i] == 'r') {
                strcpy(presses, "777");
            } else if (message[i] == 's') {
                strcpy(presses, "7777");
            } else if (message[i] == 't') {
                strcpy(presses, "8");
            } else if (message[i] == 'u') {
                strcpy(presses, "88");
            } else if (message[i] == 'v') {
                strcpy(presses, "888");
            } else if (message[i] == 'w') {
                strcpy(presses, "9");
            } else if (message[i] == 'x') {
                strcpy(presses, "99");
            } else if (message[i] == 'y') {
                strcpy(presses, "999");
            } else if (message[i] == 'z') {
                strcpy(presses, "9999");
            } else {
                strcpy(presses, "0");
            }

            if (presses[0] == lastDigit) {
                printf(" ");
            }

            printf("%s", presses);

            lastDigit = presses[0];
        }

        printf("\n");
    }

    return 0;
}

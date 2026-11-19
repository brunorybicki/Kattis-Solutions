#include <stdio.h>

int main() {
    char letter;
    scanf("%c", &letter);

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        printf("Jebb\n");
    } else if (letter == 'Y') {
        printf("Kannski\n");
    } else {
        printf("Neibb\n");
    }

    return 0;
}

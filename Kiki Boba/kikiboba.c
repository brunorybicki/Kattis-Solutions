#include <stdio.h>

int main(void) {
    char word[1000000];
    scanf("%s", word);

    int b = 0;
    int k = 0;

    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] == 'b') {
            b++;
        } else if (word[i] == 'k') {
            k++;
        }
    }

    if (b == 0 && k == 0) {
        printf("none\n");
    } else if (b > k) {
        printf("boba\n");
    } else if (k > b) {
        printf("kiki\n");
    } else {
        printf("boki\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    getchar();
    
    char qwerty[] = "qwertyuiopasdfghjklzxcvbnm";

    for (int i = 0; i < N; i++) {
        char c = getchar();

        if (c >= 'a' && c <= 'z') {
            printf("%c", qwerty[c - 'a']);
        } else {
            printf("%c", c);
        }
    }

    printf("\n");

    return 0;
}

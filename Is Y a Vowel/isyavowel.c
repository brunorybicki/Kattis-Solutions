#include <stdio.h>

int main(void) {
    int c, yVowel = 0, yNotVowel = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            yVowel++;
            yNotVowel++;
        }
        
        if (c == 'y') {
            yVowel++;
        }
    }

    printf("%d %d\n", yNotVowel, yVowel);
    return 0;
}

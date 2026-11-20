#include <stdio.h>
#include <string.h>

int main() {
    char s[1000005];
    scanf("%s", s);

    int n = strlen(s), whitespace = 0, lowercase = 0, uppercase = 0, symbols = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '_') {
            whitespace++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            lowercase++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            uppercase++;
        } else {
            symbols++;
        }
    }

    printf("%.15f\n", (double) whitespace / n);
    printf("%.15f\n", (double) lowercase / n);
    printf("%.15f\n", (double) uppercase / n);
    printf("%.15f\n", (double) symbols / n);

    return 0;
}

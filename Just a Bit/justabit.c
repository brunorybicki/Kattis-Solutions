#include <stdio.h>
#include <string.h>

int main() {
    char s[21];
    scanf("%s", s);
    
    int zeros = 0;
    int ones = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '0') {
            zeros++;
        } else if (s[i] == '1') {
            ones++;
        }
    }
    
    printf("%d %d\n", zeros, ones);
    return 0;
}

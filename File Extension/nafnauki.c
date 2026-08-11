#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    scanf("%s", name);

    int len = strlen(name);
    int lastDot = -1;
    
    for (int i = 0; i < len; i++) {
        if (name[i] == '.') {
            lastDot = i;
        }
    }

    printf("%s", name + lastDot);
    return 0;
}

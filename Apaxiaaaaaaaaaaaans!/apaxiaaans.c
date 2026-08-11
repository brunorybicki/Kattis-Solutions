#include <stdio.h>

int main(void) {
    char name[251];
    scanf("%s", name);

    printf("%c", name[0]);

    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] != name[i - 1]) {
            printf("%c", name[i]);
        }
    }
    
    return 0;
}

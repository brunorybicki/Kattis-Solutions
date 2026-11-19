#include <stdio.h>

int main() {
    char notes[35];
    scanf("%s", notes);

    int truls = 0, henry = 0;

    for (int i = 0; notes[i] != '\0'; i++) {
        if (notes[i] == 'T') {
            truls++;
        } else {
            henry++;
        }

        if ((truls >= 11 && truls - henry >= 2) || (henry >= 11 && henry - truls >= 2)) {
            truls = 0;
            henry = 0;
        }
    }

    printf("%d-%d\n", truls, henry);

    return 0;
}

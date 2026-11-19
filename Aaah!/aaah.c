#include <stdio.h>
#include <string.h>

int main() {
    char jon[1005], doctor[1005];
    scanf("%s", jon);
    scanf("%s", doctor);

    if (strlen(jon) >= strlen(doctor)) {
        printf("go\n");
    } else {
        printf("no\n");
    }

    return 0;
}

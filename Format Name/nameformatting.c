#include <stdio.h>
#include <ctype.h>

int main() {
    char lastname[1000001], firstname[1000001];
    scanf("%[^,], %s", lastname, firstname);

    printf("%c. %c%s\n", toupper(firstname[0]), toupper(lastname[0]), lastname + 1);

    return 0;
}

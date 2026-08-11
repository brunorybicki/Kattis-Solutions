#include <stdio.h>
#include <string.h>

int main() {
    char month[4];
    int day;
    scanf("%s %d", month, &day);
    
    if ((strcmp(month, "OCT") == 0 && day == 31) || (strcmp(month, "DEC") == 0 && day == 25)) {
        printf("yup");
    } else {
        printf("nope");
    }
    
    return 0;
}

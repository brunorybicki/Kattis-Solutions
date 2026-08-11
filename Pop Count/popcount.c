#include <stdio.h>

int main() {
    char string[100];
    scanf("%s", string);
    
    int poppedKernels = 0;
    
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '1') {
            poppedKernels++;
        }
    }
    
    printf("%d\n", poppedKernels);
    return 0;
}

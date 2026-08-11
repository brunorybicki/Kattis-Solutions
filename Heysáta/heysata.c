#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char k;
    scanf(" %c", &k);
    
    char haystack[n + 1];
    scanf("%s", haystack);
    
    int theNeedleIsInside = 0;
    
    for (int i = 0; i < n; i++) {
        if (k == haystack[i]) {
            theNeedleIsInside = 1;
            break;
        }
    }
    
    if (theNeedleIsInside) {
        printf("Unnar fann hana!");
    } else {
        printf("Unnar fann hana ekki!");
    }
    
    return 0;
}
